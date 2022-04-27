/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:52:09 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/27 19:54:25 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AWESOME_HPP__
# define __AWESOME_HPP__

# include <iostream>

class Awesome
{
	public:
		Awesome(void) : _n(42) { return; }
		int get(void) const { return this->_n; }
	private:
		int _n;
};

std::ostream	&operator<<(std::ostream &o, Awesome const &rhs)
{
	o << rhs.get();
	return o;
}

#endif
