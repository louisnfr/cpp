#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _var(0)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

int	Bureaucrat::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, Bureaucrat const &i)
{
	cout << i.getVar();
	return (cout);
}
