/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 02:31:36 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/21 03:47:26 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &src);
		Cure &operator=(Cure const &rhs);
		virtual ~Cure(void);
		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);
};

std::ostream	&operator<<(std::ostream &o, Cure const &i);

#endif
