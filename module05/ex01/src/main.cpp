/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 22:40:26 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 01:39:34 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	tommy("Thomas", 1);
	Bureaucrat	tom(tommy);
	Bureaucrat	arthur("Arthur", 2);
	Bureaucrat	john("John", 149);

	std::cout << std::endl;

	std::cout << tommy << std::endl;
	std::cout << arthur << std::endl;
	std::cout << john << std::endl;

	std::cout << std::endl;

	arthur.promote();
	std::cout << arthur << std::endl;
	john.demote();
	std::cout << john << std::endl;

	std::cout << std::endl;

	try
	{
		arthur.promote();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		john.demote();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat	polly("Polly", 0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	linda("Linda", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	return (0);
}
