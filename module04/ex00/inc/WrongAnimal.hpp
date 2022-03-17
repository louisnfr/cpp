#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal &operator=(WrongAnimal const &rhs);
		~WrongAnimal(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, WrongAnimal const &i);

#endif
