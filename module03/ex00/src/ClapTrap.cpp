/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 02:53:46 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 18:20:20 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hit(10), _energy(10), _attack(0)
{
	std::cout << "[\033[32mCLAP\033[0m] ";
	std::cout << _name << " is born." << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "[\033[32mCLAP\033[0m] ";
	std::cout << _name << " is born." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _name(src._name)
{
	std::cout << "[\033[32mCLAP\033[0m] ";
	std::cout << _name << " has been cloned." << std::endl;
	*this = src;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_attack = rhs._attack;
	this->_energy = rhs._energy;
	this->_hit = rhs._hit;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[\033[32mCLAP\033[0m] ";
	std::cout << _name << " has been destroyed." << std::endl;
}

std::string const	ClapTrap::getName(void) const
{
	return (_name);
}

void	ClapTrap::attack(std::string const &target)
{
	if (_energy == 0 || _hit == 0)
	{
		std::cout << "[\033[32mCLAP\033[0m] ";
		std::cout << _name << " can't attack." << std::endl;
		return ;
	}
	std::cout << "[\033[32mCLAP\033[0m] ";
	std::cout << _name << " deals " << _attack << " damage to "
			<< target << "." << std::endl;
	_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit == 0)
	{
		std::cout << "[\033[32mCLAP\033[0m] ";
		std::cout << _name << " is already dead." << std::endl;
		return ;
	}
	if (amount > _hit)
		_hit = 0;
	else
		_hit -= amount;
	std::cout << "[\033[32mCLAP\033[0m] ";
	std::cout << _name << " takes " << amount << " damage and has now "
			<< _hit << " hit points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy == 0 || _hit == 0)
	{
		std::cout << "[\033[32mCLAP\033[0m] ";
		std::cout << _name << " can't heal." << std::endl;
		return ;
	}
	if (amount + _hit < _hit)
		_hit = UINTMAX;
	else
		_hit += amount;
	std::cout << "[\033[32mCLAP\033[0m] ";
	std::cout << _name << " heals with " << amount << " points and has now "
			<< _hit << " hit points." << std::endl;
	_energy--;
}

std::ostream	&operator<<(std::ostream &cout, ClapTrap const &i)
{
	cout << "[\033[32mCLAP\033[0m] " << i.getName();
	return (cout);
}
