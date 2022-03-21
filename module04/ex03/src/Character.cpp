#include "Character.hpp"

Character::Character(void) : _var(0)
{
}

Character::Character(Character const &src)
{
	*this = src;
}

Character	&Character::operator=(Character const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Character::~Character(void)
{
}

int	Character::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, Character const &i)
{
	cout << i.getVar();
	return (cout);
}
