#ifndef __CURE_HPP__
# define __CURE_HPP__

# include <iostream>

class Cure
{
	public:
		Cure(void);
		Cure(Cure const &src);
		Cure &operator=(Cure const &rhs);
		~Cure(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, Cure const &i);

#endif
