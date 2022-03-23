#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include <iostream>

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		Intern &operator=(Intern const &rhs);
		~Intern(void);
		int	getVar(void) const;
	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, Intern const &i);

#endif
