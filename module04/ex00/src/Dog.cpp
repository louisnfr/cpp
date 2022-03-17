#include "Dog.hpp"

Dog::Dog(void) : _var(0)
{
}

Dog::Dog(Dog const &src)
{
	*this = src;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Dog::~Dog(void)
{
}

int	Dog::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, Dog const &i)
{
	cout << i.getVar();
	return (cout);
}
