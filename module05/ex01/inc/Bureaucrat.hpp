/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 22:40:59 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 00:22:24 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include <exception>

class Bureaucrat
{
	public:
		Bureaucrat(std::string const &name, unsigned int grade);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat &operator=(Bureaucrat const &rhs);
		~Bureaucrat(void);
		std::string const	getName(void) const;
		unsigned int		getGrade(void) const;
		void				promote(void);
		void				demote(void);
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
		unsigned int		_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i);

#endif
