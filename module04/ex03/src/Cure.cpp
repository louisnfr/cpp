/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 02:34:39 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/21 02:47:08 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "[CONST] Cure" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	std::cout << "[COPY] Cure" << std::endl;
}

Cure	&Cure::operator=(Cure const &rhs)
{
	// this->_type = rhs.getType();
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "[DEST] Cure" << std::endl;
}

AMateria	*Cure::clone(void) const
{
	AMateria	*tmp = new Cure;

	*tmp = *this;
	return (tmp);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, Cure const &i)
{
	cout << i.getType();
	return (cout);
}
