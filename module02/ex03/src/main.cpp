/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 02:02:55 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/16 00:03:42 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static void	show(std::string msg, Fixed fixed)
{
	std::cout << msg << fixed << std::endl;
}

int	main(void)
{
	Fixed	a(5.5f);
	Fixed	b(42);
	Fixed	c(a);

	show("a = ", a);
	show("b = ", b);
	show("c = ", c);

	c = b / a;
	show("b / a = ", c);

	show("++c = ", ++c);
	show("c-- = ", c--);
	show("c = ", c);

	Fixed const	a_const(178);
	Fixed const	b_const(35);
	show("const min: ", Fixed::min(a_const, b_const));

	show("a = ", a);
	show("c = ", c);
	show("a == c: ", a == c);
	show("a != c: ", a != c);

	c = a;
	show("a == c: ", a == c);
	show("a != c: ", a != c);

	return (0);
}
