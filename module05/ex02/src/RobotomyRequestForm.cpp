#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : _var(0)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
	*this = src;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

int	RobotomyRequestForm::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, RobotomyRequestForm const &i)
{
	cout << i.getVar();
	return (cout);
}
