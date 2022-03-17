#ifndef __FLAGTRAP_HPP__
# define __FLAGTRAP_HPP__

# include <iostream>

class FlagTrap
{
	public:
		FlagTrap(void);
		FlagTrap(FlagTrap const &src);
		FlagTrap &operator=(FlagTrap const &rhs);
		~FlagTrap(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, FlagTrap const &i);

#endif
