/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 22:40:26 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 18:31:47 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	boss("boss", 1);
	ShrubberyCreationForm	arbre("bouisson");

	std::cout << arbre << std::endl;

	boss.signForm(arbre);

	std::cout << arbre << std::endl;

	ShrubberyCreationForm	arbre2(arbre);

	std::cout << arbre2 << std::endl;

	return (0);
}
