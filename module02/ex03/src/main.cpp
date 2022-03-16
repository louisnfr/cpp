/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 02:02:55 by 0lraffin           #+#    #+#             */
/*   Updated: 2022/03/16 20:35:56 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static void	result(Point const a, Point const b, Point const c, Point const d)
{
	std::cout << "Triangle ABC" << std::endl;
	std::cout << "A" << a << std::endl;
	std::cout << "B" << b << std::endl;
	std::cout << "C" << c << std::endl;
	std::cout << "D" << d << " is ";
	if (bsp(a, b, c, d) == false)
		std::cout << "not ";
	std::cout << "in the triangle" << std::endl << std::endl;
}

// verify with
// https://planetcalc.com/8108/

int	main(void)
{
	// Triangle
	Point a(0.0f, 0.0f);
	Point b(10.5f, 0.0f);
	Point c(5.0f, 5.5f);

	Point d(7.5f, 2.9f); // should be true
	Point e(7.5f, 3.0f); // on a side, should be false
	Point f(7.5f, 3.1f); // should be false
	Point g(0.0f, 0.0f); // on A, should be false

	result(a, b, c, d);
	result(a, b, c, e);
	result(a, b, c, f);
	result(a, b, c, g);

	return (0);
}
