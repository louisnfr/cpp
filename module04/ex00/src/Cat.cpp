#include "Cat.hpp"

Cat::Cat(void) : _var(0)
{
}

Cat::Cat(Cat const &src)
{
	*this = src;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Cat::~Cat(void)
{
}

int	Cat::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, Cat const &i)
{
	cout << i.getVar();
	return (cout);
}
