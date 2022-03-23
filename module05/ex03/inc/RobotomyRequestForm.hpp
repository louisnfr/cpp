/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:29:06 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 22:05:59 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string target = "default");
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		~RobotomyRequestForm(void);
		virtual void	execute(void) const;
		class FailedToRobotomizeException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	private:
		std::string const	_target;
};

#endif
