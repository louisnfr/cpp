/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:25:33 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 16:30:28 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string name, unsigned int sign_grade, unsigned int exec_grade);
		Form(Form const &src);
		Form &operator=(Form const &rhs);
		~Form(void);
		std::string const	getName(void) const;
		bool				getStatus(void) const;
		unsigned int	getSignGrade(void) const;
		unsigned int	getExecGrade(void) const;
		void			beSigned(Bureaucrat const &b);
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
	private:
		std::string const	_name;
		bool				_is_signed;
		unsigned int const	_sign_grade;
		unsigned int const	_exec_grade;
};

std::ostream	&operator<<(std::ostream &o, Form const &i);

#endif
