/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 22:40:26 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 16:37:49 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	{
	try
	{
		Form("WPE", 0, 150);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form("WPE", 150, 0);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form("WPE", 151, 150);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form("WPE", 150, 151);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	}

	Bureaucrat	walter("Walter", 1);
	Form		form("FSP", 1, 12);

	std::cout << std::endl;
	std::cout << form << std::endl;

	walter.demote();
	walter.signForm(form);
	walter.promote();
	walter.signForm(form);

	std::cout << std::endl;
	std::cout << form << std::endl;

	return (0);
}
