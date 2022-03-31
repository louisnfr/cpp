/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:26:32 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/31 22:42:01 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

# include <iostream>
# include <algorithm>

class ValueNotFound : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Value not found");
		}
};

template<typename T>
void	easyfind(T &container, int n)
{
	typename T::const_iterator it;

	it = std::find(container.begin(), container.end(), n);
	try
	{
		if (it == container.end())
			throw ValueNotFound();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout << "Value found: " << *it << std::endl;
}

#endif
