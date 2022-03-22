#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : _var(0)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
{
	*this = src;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

int	PresidentialPardonForm::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, PresidentialPardonForm const &i)
{
	cout << i.getVar();
	return (cout);
}
