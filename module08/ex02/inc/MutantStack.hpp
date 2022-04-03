/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:23:45 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/03 19:02:58 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {};
		MutantStack(MutantStack const &src) {
			*this = src;
		};
		MutantStack &operator=(MutantStack const &rhs) {
			this->c = rhs.c;
			return (*this);
		};
		~MutantStack(void) {};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {
			return this->c.begin();
		};
		iterator end() {
			return this->c.end();
		};
};

#endif
