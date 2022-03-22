#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include <iostream>

class RobotomyRequestForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		~RobotomyRequestForm(void);
		int	getVar(void) const;
	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &i);

#endif
