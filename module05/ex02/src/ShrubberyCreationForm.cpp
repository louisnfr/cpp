#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : _var(0)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
	*this = src;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

int	ShrubberyCreationForm::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, ShrubberyCreationForm const &i)
{
	cout << i.getVar();
	return (cout);
}
