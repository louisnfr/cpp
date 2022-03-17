/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:16:40 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 23:43:52 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &src);
		Animal &operator=(Animal const &rhs);
		~Animal(void);

		std::string	getType(void) const;
		void		makeSound(void) const;
		
	protected:
		std::string	_type;
};

std::ostream	&operator<<(std::ostream &o, Animal const &i);

#endif
