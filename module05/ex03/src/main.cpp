/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 22:40:26 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/23 03:05:24 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main(void)
{
	Intern		intern;
	Bureaucrat	crat("Franklin", 5);
	AForm		*form;

	form = intern.makeForm("ShrubberyCreation", "forest");
	std::cout << *form;
	crat.signForm(*form);
	crat.executeForm(*form);
	delete form;

	std::cout << std::endl;

	form = intern.makeForm("Unknown", "target");

	std::cout << std::endl;

	form = intern.makeForm("RobotomyRequest", "target");
	std::cout << *form;
	delete form;

	std::cout << std::endl;

	form = intern.makeForm("PresidentialPardon", "target");
	std::cout << *form;
	delete form;

	return (0);
}
