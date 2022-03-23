/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:30:00 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/23 02:43:46 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("Robotomy", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
	: AForm(src)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	AForm::operator=(rhs);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

char const	*RobotomyRequestForm::FailedToRobotomizeException::what(void) const throw()
{
	return ("failed to robotomize");
}

void	RobotomyRequestForm::execute(void) const
{
	std::srand(time(NULL));
	std::cout << "*drill noises*" << std::endl;
	if ((std::rand() % 2) == 0)
		throw RobotomyRequestForm::FailedToRobotomizeException();
	std::cout << this->_target << " was robotomized" << std::endl;
}
