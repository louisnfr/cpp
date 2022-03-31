/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:51:17 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/31 22:51:46 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	return (0);
}
