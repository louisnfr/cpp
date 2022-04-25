/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:51:54 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/25 18:29:57 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <iostream>
# include <vector>

class NoSpan : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("No span found");
		}
};

class AlreadyFull : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Already full");
		}
};

class Span
{
	public:
		explicit Span(unsigned int n = 0);
		Span(Span const &src);
		Span &operator=(Span const &rhs);
		~Span(void) {};
		void	print(void) const;
		void	addNumber(int n);
		void	addNumbers(unsigned int n, int range);
		unsigned int longestSpan(void) const;
		unsigned int shortestSpan(void) const;
	private:
		unsigned int		_n;
		std::vector<int>	_vector;

};

#endif
