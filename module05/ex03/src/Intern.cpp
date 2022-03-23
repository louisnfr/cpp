#include "Intern.hpp"

Intern::Intern(void) : _var(0)
{
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Intern::~Intern(void)
{
}

int	Intern::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, Intern const &i)
{
	cout << i.getVar();
	return (cout);
}
