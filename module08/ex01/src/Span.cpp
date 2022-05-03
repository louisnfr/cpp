/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:51:52 by lraffin           #+#    #+#             */
/*   Updated: 2022/05/03 16:15:50 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <iterator>
#include <climits>

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(Span const &src)
{
	*this = src;
}

Span	&Span::operator=(Span const &rhs)
{
	this->_vector.clear();
	this->_n = rhs._n;
	this->_vector = rhs._vector;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (!this->_n)
		throw AlreadyFull();
	this->_vector.push_back(n);
	this->_n--;
}

void	Span::print(void) const
{
	std::copy(this->_vector.begin(), this->_vector.end(),
			std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}

unsigned int	Span::longestSpan(void) const
{
	unsigned int	max;
	unsigned int	min;

	if (this->_vector.size() < 2)
		throw NoSpan();
	max = *std::max_element(_vector.begin(), _vector.end());
	min = *std::min_element(_vector.begin(), _vector.end());
	return (max - min);
}

unsigned int	Span::shortestSpan(void) const
{
	std::vector<int>	tmp = _vector;
	unsigned int		shortest_span = UINT_MAX;
	std::vector<int>::const_iterator it;

	if (this->_vector.size() < 2)
		throw NoSpan();
	std::sort(tmp.begin(), tmp.end());
	for (it = tmp.begin(); it + 1 != tmp.end(); it++)
	{
		unsigned int diff = *(it + 1) - *it;
		if (diff < shortest_span)
			shortest_span = diff;
	}
	return (shortest_span);
}

void	Span::addNumbers(unsigned int n, int range)
{
	srand(time(NULL));
	for (size_t i = 0; i < n; i++)
		this->addNumber(rand() % range);
}
