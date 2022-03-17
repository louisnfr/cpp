/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:49:31 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/18 00:41:12 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &src);
		Dog &operator=(Dog const &rhs);
		~Dog(void);

		virtual void	makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &o, Dog const &i);

#endif
