#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

# include <iostream>

class WrongCat
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const &src);
		WrongCat &operator=(WrongCat const &rhs);
		~WrongCat(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, WrongCat const &i);

#endif
