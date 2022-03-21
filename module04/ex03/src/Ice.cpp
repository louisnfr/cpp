/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 01:57:50 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/21 18:21:58 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "[CONST] Ice" << std::endl;
}

Ice::Ice(Ice const &src) : AMateria(src)
{
	std::cout << "[COPY] Ice" << std::endl;
}

Ice	&Ice::operator=(Ice const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "[DEST] Ice" << std::endl;
}

AMateria	*Ice::clone(void) const
{
	AMateria	*tmp = new Ice;

	*tmp = *this;
	return (tmp);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, Ice const &i)
{
	cout << i.getType();
	return (cout);
}
