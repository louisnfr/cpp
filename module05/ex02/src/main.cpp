/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 22:40:26 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 22:22:05 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	{
		std::cout << "* SHRUBBERY TEST *" << std::endl << std::endl;

		ShrubberyCreationForm	shrub("garden");
		Bureaucrat				gardener("gardener", 138);

		std::cout << shrub << std::endl;

		gardener.executeForm(shrub);
		gardener.signForm(shrub);
		gardener.executeForm(shrub);
		gardener.promote();
		gardener.executeForm(shrub);
	}
	std::cout << std::endl;
	{
		std::cout << "* ROBOTOMIZE TEST *" << std::endl << std::endl;

		RobotomyRequestForm	robot("robot");
		Bureaucrat			bureau("bureaucrat", 45);

		std::cout << robot << std::endl;

		bureau.signForm(robot);
		bureau.executeForm(robot);
	}
	std::cout << std::endl;
	{
		std::cout << "* PRESIDENTIAL TEST *" << std::endl << std::endl;

		PresidentialPardonForm	pardon("pardon");
		Bureaucrat				president("president", 1);

		std::cout << pardon << std::endl;

		president.signForm(pardon);
		president.executeForm(pardon);
	}
	return (0);
}
