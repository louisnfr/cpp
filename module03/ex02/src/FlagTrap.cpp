#include "FlagTrap.hpp"

FlagTrap::FlagTrap(void) : _var(0)
{
}

FlagTrap::FlagTrap(FlagTrap const &src)
{
	*this = src;
}

FlagTrap	&FlagTrap::operator=(FlagTrap const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

FlagTrap::~FlagTrap(void)
{
}

int	FlagTrap::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, FlagTrap const &i)
{
	cout << i.getVar();
	return (cout);
}
