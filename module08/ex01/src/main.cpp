/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:51:17 by lraffin           #+#    #+#             */
/*   Updated: 2022/05/03 16:10:48 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	/**************************************************/
	std::cout << "** SUBJECT TEST **" << std::endl;
	Span	sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.print();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	/**************************************************/
	std::cout << std::endl << "** EXCEPTIONS TEST **" << std::endl;
	Span	sp2 = Span(10);

	try
	{
		sp2.addNumber(42);
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		sp2.addNumbers(11, 100);
		sp2.print();
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	/**************************************************/
	std::cout << std::endl << "** COPY TEST **" << std::endl;
	Span	copy(sp2);

	copy.print();
	std::cout << copy.shortestSpan() << std::endl;
	std::cout << copy.longestSpan() << std::endl;
	/**************************************************/
	std::cout << std::endl << "** LARGE TEST **" << std::endl;
	Span	large(42000);

	large.addNumbers(42000, 10000);
	std::cout << large.shortestSpan() << std::endl;
	std::cout << large.longestSpan() << std::endl;
	return (0);
}
