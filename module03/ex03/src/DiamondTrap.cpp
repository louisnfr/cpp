/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:51:18 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 22:43:37 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	: ClapTrap(), FragTrap(), _name("default")
{
	this->_hit = FragTrap::_hit;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
	std::cout << "[\033[34mDIAM\033[0m] ";
	std::cout << _name << " is born." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name)
	: ClapTrap(name + "_clap_name"), _name(name)
{
	this->_hit = FragTrap::_hit;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
	std::cout << "[\033[34mDIAM\033[0m] ";
	std::cout << _name << " is born." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
	: ClapTrap(src), ScavTrap(src), FragTrap(src), _name(src._name)
{
	std::cout << "[\033[34mDIAM\033[0m] ";
	std::cout << _name << " has been cloned." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	*this = rhs;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[\033[34mDIAM\033[0m] ";
	std::cout << _name << " has been destroyed." << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "[\033[34mDIAM\033[0m] ";
	std::cout << this->_name << " inherited from "
			<< this->ClapTrap::getName() << "." << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, DiamondTrap const &i)
{
	cout << "[\033[34mDIAM\033[0m] " << i.getName();
	return (cout);
}
