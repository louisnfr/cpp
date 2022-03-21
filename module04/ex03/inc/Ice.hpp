/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 01:56:53 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/21 03:54:43 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &src);
		Ice &operator=(Ice const &rhs);
		virtual ~Ice(void);
		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);
};

std::ostream	&operator<<(std::ostream &o, Ice const &i);

#endif
