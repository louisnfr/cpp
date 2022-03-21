/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:20:22 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/21 19:12:50 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "[CONST] MateriaSource" << std::endl;
	for (size_t i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "[COPY] MateriaSource" << std::endl;
	*this = src;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (rhs._materia[i] != NULL)
			this->_materia[i] = rhs._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "[DEST] MateriaSource" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		delete this->_materia[i];
		this->_materia[i] = NULL;
	}
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			return ;
		}
	}
	std::cout << "* no place to learn a new materia *" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < 4; i++)
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	return (NULL);
}
