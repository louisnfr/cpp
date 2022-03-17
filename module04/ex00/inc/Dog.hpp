#ifndef __DOG_HPP__
# define __DOG_HPP__

# include <iostream>

class Dog
{
	public:
		Dog(void);
		Dog(Dog const &src);
		Dog &operator=(Dog const &rhs);
		~Dog(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, Dog const &i);

#endif
