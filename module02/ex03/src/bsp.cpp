/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:09:32 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/05 14:57:12 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	scalar_product(Point a, Point b, Point c)
{
	return (a.getX() - c.getX()) * (b.getY() - c.getY())
		- (b.getX() - c.getX()) * (a.getY() - c.getY());
}

bool	bsp(Point a, Point b, Point c, Point point)
{
	Fixed	sp1, sp2, sp3;
	bool	all_negatives;
	bool	all_positives;

	sp1 = scalar_product(point, a, b);
	sp2 = scalar_product(point, b, c);
	sp3 = scalar_product(point, c, a);

	all_negatives = (sp1 < 0) && (sp2 < 0) && (sp3 < 0);
	all_positives = (sp1 > 0) && (sp2 > 0) && (sp3 > 0);

	if (sp1 == 0 || sp2 == 0 || sp3 == 0)
		return (false);
	return (all_negatives || all_positives);
}
