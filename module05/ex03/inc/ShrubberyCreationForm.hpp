/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:14:31 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 21:38:48 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string target = "default");
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		~ShrubberyCreationForm(void);
		virtual void	execute(void) const;
		class FailedToOpenFileException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	private:
		std::string const	_target;
};

#endif
