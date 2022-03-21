#include "Cure.hpp"

Cure::Cure(void) : _var(0)
{
}

Cure::Cure(Cure const &src)
{
	*this = src;
}

Cure	&Cure::operator=(Cure const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Cure::~Cure(void)
{
}

int	Cure::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, Cure const &i)
{
	cout << i.getVar();
	return (cout);
}
