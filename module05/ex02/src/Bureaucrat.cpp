/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 22:40:24 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 16:33:00 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static void	check_grade(unsigned int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string const &name, unsigned int grade)
	: _name(name), _grade(grade)
{
	check_grade(this->_grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	check_grade(rhs._grade);
	this->_grade = rhs.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

void	Bureaucrat::promote(void)
{
	check_grade(this->getGrade() - 1);
	this->_grade -= 1;
}

void	Bureaucrat::demote(void)
{
	check_grade(this->getGrade() + 1);
	this->_grade += 1;
}

std::string const	Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::signForm(Form &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << this->getName() << " couldn't sign ";
		std::cerr << f.getName() << " because ";
		std::cerr << e.what() << std::endl;
	}
}

char const	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("grade too high");
}

char const	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("grade too low");
}

std::ostream	&operator<<(std::ostream &cout, Bureaucrat const &i)
{
	cout << i.getName() << ": " << i.getGrade();
	return (cout);
}
