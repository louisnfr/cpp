/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:54:46 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/15 23:38:38 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		/* constructors */
		Fixed(void);
		Fixed(int const n);
		Fixed(float const f);
		Fixed(Fixed const &src);
		/* destructors */
		~Fixed(void);
		/* getters */
		int		getRawBits(void) const;
		/* setters */
		void	setRawBits(int const raw);
		/* convertors */
		float	toFloat(void) const;
		int		toInt(void) const;
		/* overload */
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);
		/* affectation */
		Fixed	&operator=(Fixed const &rhs);
		/* comparison */
		bool operator>(Fixed const &rhs) const ;
		bool operator<(Fixed const &rhs) const ;
		bool operator>=(Fixed const &rhs) const ;
		bool operator<=(Fixed const &rhs) const ;
		bool operator==(Fixed const &rhs) const ;
		bool operator!=(Fixed const &rhs) const ;
		/* arithmetic */
		Fixed	operator+(Fixed const &rhs) const ;
		Fixed	operator-(Fixed const &rhs) const ;
		Fixed	operator*(Fixed const &rhs) const ;
		Fixed	operator/(Fixed const &rhs) const ;
		/* increment */
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

	private:
		static int const	_binary_point = 8;
		int					_raw_bits;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
