#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include <iostream>

class FragTrap
{
	public:
		FragTrap(void);
		FragTrap(FragTrap const &src);
		FragTrap &operator=(FragTrap const &rhs);
		~FragTrap(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, FragTrap const &i);

#endif
