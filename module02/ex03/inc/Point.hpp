/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:54:46 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/13 01:57:31 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
# define __POINT_HPP__

# include <iostream>

class Point
{
	public:
		Point(void);
		Point(Point const &src);
		~Point(void);

		Point	&operator=(Point const &rhs);

		int	getVar(void) const;

	private:
		int	_var;
};

#endif
