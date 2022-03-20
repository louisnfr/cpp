/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:49:28 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/20 17:31:25 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &src);
		Cat &operator=(Cat const &rhs);
		virtual ~Cat(void);
		virtual void	makeSound(void) const;
	private:
		Brain	*_brain;
};

std::ostream	&operator<<(std::ostream &o, Cat const &i);

#endif
