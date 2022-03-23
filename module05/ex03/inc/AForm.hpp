/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:25:33 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 18:08:06 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM_HPP__
# define __AFORM_HPP__

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(std::string name, unsigned int sign_grade, unsigned int exec_grade);
		AForm(AForm const &src);
		AForm &operator=(AForm const &rhs);
		virtual ~AForm(void);
		std::string const	getName(void) const;
		bool				getStatus(void) const;
		unsigned int		getSignGrade(void) const;
		unsigned int		getExecGrade(void) const;
		void				beSigned(Bureaucrat const &signer);
		void				beExecuted(Bureaucrat const &executor) const;
		virtual void		execute(void) const = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		std::string const	_name;
		bool				_is_signed;
		unsigned int const	_sign_grade;
		unsigned int const	_exec_grade;
};

std::ostream	&operator<<(std::ostream &o, AForm const &i);

#endif
