/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:06:10 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/13 00:08:49 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. ";
	std::cout << "I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger ! ";
	std::cout << "If you did, I wouldn't be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working here ";
	std::cout << "since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	Harl		karen;
	int			i;
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*func[4])(void) = {&Harl::debug, &Harl::info,
										&Harl::warning, &Harl::error};

	i = 0;
	while (i < 4)
	{
		if (level == str[i])
			(this->*func[i])();
		i++;
	}
}
