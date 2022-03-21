#include "ICharacter.hpp"

ICharacter::ICharacter(void) : _var(0)
{
}

ICharacter::ICharacter(ICharacter const &src)
{
	*this = src;
}

ICharacter	&ICharacter::operator=(ICharacter const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

ICharacter::~ICharacter(void)
{
}

int	ICharacter::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, ICharacter const &i)
{
	cout << i.getVar();
	return (cout);
}
