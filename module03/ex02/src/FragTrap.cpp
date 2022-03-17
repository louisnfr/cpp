#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _var(0)
{
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

FragTrap::~FragTrap(void)
{
}

int	FragTrap::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, FragTrap const &i)
{
	cout << i.getVar();
	return (cout);
}
