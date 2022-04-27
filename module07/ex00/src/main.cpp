/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:04:36 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/27 19:42:19 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	std::cout << "\033[1;33m* INT *\033[0m\n" << std::endl;
	{

		int	a = 0;
		int	b = 83;

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
	std::cout << std::endl << "\033[1;33m* AWESOME *\033[0m\n" << std::endl;
	{
		Awesome e = Awesome(5);
		Awesome f = Awesome(8);

		std::cout << "e = " << e << ", f = " << f << std::endl;
		std::cout << "swap" << std::endl;
		::swap(e , f);
		std::cout << "e = " << e << ", f = " << f << std::endl << std::endl;

		std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
		std::cout << "max(e, f) = " << ::max(e, f) << std::endl;

	}
	return (0);
}
