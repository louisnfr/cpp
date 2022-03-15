/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:54:46 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/13 01:57:31 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLASS_HPP__
# define __CLASS_HPP__

# include <iostream>

class Class
{
	public:
		Class(void);
		Class(Class const &src);
		~Class(void);

		Class	&operator=(Class const &rhs);

		int	getVar(void) const;

	private:
		int	_var;
};

#endif
