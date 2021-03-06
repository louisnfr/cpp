/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:51:18 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/14 14:41:48 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "[\033[31mFRAG\033[0m] ";
	std::cout << _name << " is born." << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "[\033[31mFRAG\033[0m] ";
	std::cout << _name << " is born." << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "[\033[31mFRAG\033[0m] ";
	std::cout << _name << " has been cloned." << std::endl;
	*this = src;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	this->_attack = rhs._attack;
	this->_energy = rhs._energy;
	this->_hit = rhs._hit;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "[\033[31mFRAG\033[0m] ";
	std::cout << _name << " has been destroyed." << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	if (_energy == 0 || _hit == 0)
	{
		std::cout << "[\033[31mFRAG\033[0m] ";
		std::cout << _name << " can't attack." << std::endl;
		return ;
	}
	std::cout << "[\033[31mFRAG\033[0m] ";
	std::cout << _name << " deals " << _attack << " damage to "
			<< target << "." << std::endl;
	_energy--;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "[\033[31mFRAG\033[0m] ";
	std::cout << _name << " asks for a high five." << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, FragTrap const &i)
{
	cout << "[\033[31mFRAG\033[0m] " << i.getName();
	return (cout);
}
