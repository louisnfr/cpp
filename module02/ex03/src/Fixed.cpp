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

/* constructors */

Fixed::Fixed(void)
{
	this->_raw_bits = 0;
	return ;
}

Fixed::Fixed(int const n)
{
	this->_raw_bits = n << _binary_point;
	return ;
}

Fixed::Fixed(float const f)
{
	this->_raw_bits = roundf(f * (1 << _binary_point));
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return ;
}

/* destructors */

Fixed::~Fixed(void)
{
	return ;
}

/* getters */

int	Fixed::getRawBits(void) const
{
	return (this->_raw_bits);
}

/* setters */

void	Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
	return ;
}

/* convertors */

int	Fixed::toInt(void) const
{
	return (int(this->_raw_bits >> _binary_point));
}

float	Fixed::toFloat(void) const
{
	return (float(this->_raw_bits) / float(1 << _binary_point));
}

/* overload */

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

/* affectation */

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->_raw_bits = rhs.getRawBits();
	return (*this);
}

/* comparison */

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

/* arithmetic */

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}

/*  increment */

Fixed	&Fixed::operator++(void) // ++i
{
	this->_raw_bits++;
	return (*this);
}

Fixed	Fixed::operator++(int) // i++
{
	Fixed	tmp;

	tmp = *this;
	this->_raw_bits++;
	return (tmp);
}

Fixed	&Fixed::operator--(void) // --i
{
	this->_raw_bits--;
	return (*this);
}

Fixed	Fixed::operator--(int) // i--
{
	Fixed	tmp;

	tmp = *this;
	this->_raw_bits--;
	return (tmp);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
