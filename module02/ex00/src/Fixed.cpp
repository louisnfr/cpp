/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:58:20 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/13 01:59:02 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_raw_bits = rhs.getRawBits();
	return (*this);
}
