/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 01:58:00 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/23 02:49:45 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include "AForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		Intern &operator=(Intern const &rhs);
		~Intern(void);
		AForm	*makeForm(std::string name, std::string target);
		class UnknownFormException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	private:
		AForm	*_Shrubbery(std::string target);
		AForm	*_Robotomy(std::string target);
		AForm	*_Presidential(std::string target);
};

#endif
