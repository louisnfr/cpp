/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:51:18 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 22:44:31 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "[\033[33mSCAV\033[0m] ";
	std::cout << _name << " is born." << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "[\033[33mSCAV\033[0m] ";
	std::cout << _name << " is born." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "[\033[33mSCAV\033[0m] ";
	std::cout << _name << " has been cloned." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	*this = rhs;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[\033[33mSCAV\033[0m] ";
	std::cout << _name << " has been destroyed." << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (_energy == 0 || _hit == 0)
	{
		std::cout << "[\033[33mSCAV\033[0m] ";
		std::cout << _name << " can't attack." << std::endl;
		return ;
	}
	std::cout << "[\033[33mSCAV\033[0m] ";
	std::cout << _name << " deals " << _attack << " damage to "
			<< target << "." << std::endl;
	_energy--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "[\033[33mSCAV\033[0m] ";
	std::cout << _name << " entered gate keeper mode." << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, ScavTrap const &i)
{
	cout << "[\033[33mSCAV\033[0m] " << i.getName();
	return (cout);
}
