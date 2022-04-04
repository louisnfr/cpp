/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:54:46 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/04 18:34:24 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const f);
		Fixed(Fixed const &src);
		~Fixed(void);
		Fixed	&operator=(Fixed const &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		static int const	_binary_point = 8;
		int					_raw_bits;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
