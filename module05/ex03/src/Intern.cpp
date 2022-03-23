/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:01:10 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/23 03:05:59 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Intern::~Intern(void)
{
}

AForm	*Intern::_Shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::_Robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::_Presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string	form[3] = {"ShrubberyCreation",
						"RobotomyRequest",
						"PresidentialPardon"};
	AForm	*(Intern::*func[3])(std::string) = {&Intern::_Shrubbery,
											&Intern::_Robotomy,
											&Intern::_Presidential};
	try
	{
		for (int i = 0; i < 3; i++)
			if (name == form[i])
				return (this->*func[i])(target);
		throw Intern::UnknownFormException();
	}
	catch(std::exception & e)
	{
		std::cerr << "Couldn't create " << name << " because ";
		std::cerr << e.what() << std::endl;
		return (NULL);
	}
}

char const	*Intern::UnknownFormException::what(void) const throw()
{
	return ("no form exists with this name");
}
