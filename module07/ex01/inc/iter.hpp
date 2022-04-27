/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:07:15 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/27 20:25:53 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
# define __ITER_HPP__

# include <iostream>

# define BLUE	"\033[34m"
# define RED	"\033[33m"
# define NOC	"\033[0m"

template<typename T>
void	iter(T *array, int n, void f(T &array))
{
	for (int i = 0; i < n; i++)
		f(array[i]);
}

template<typename T>
void	increment(T &array)
{
	array++;
}

template<typename T>
void	print(T &x)
{
	std::cout << x << std::endl;
	return;
}

template<typename T>
void	print_color(T &x) {
	std::cout << BLUE << x << NOC << std::endl;
	return;
}

#endif
