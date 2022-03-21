/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 01:51:39 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/21 18:21:51 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "[CONST] AMateria" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "[COPY] AMateria" << std::endl;
	*this = src;
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "[DEST] AMateria" << std::endl;
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "* materia use at " << target.getName() << " *" << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, AMateria const &i)
{
	cout << i.getType();
	return (cout);
}
