/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:04:36 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/27 19:34:58 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	std::cout << "\033[1;33m* INT *\033[0m\n" << std::endl;
	{

		int	a = 2;
		int	b = 3;

		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "swap" << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;

		std::cout << "min(a, b) = " <<::min(a, b) << std::endl;
		std::cout << "max(a, b) = " <<::max(a, b) << std::endl;
	}
	std::cout << std::endl << "\033[1;33m* CHAR *\033[0m\n" << std::endl;
	{
		std::string c = "zzz";
		std::string d = "aaa";

		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "swap" << std::endl;
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl << std::endl;

		std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
		std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	}
	return (0);
}
