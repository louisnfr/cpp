#ifndef __CAT_HPP__
# define __CAT_HPP__

# include <iostream>

class Cat
{
	public:
		Cat(void);
		Cat(Cat const &src);
		Cat &operator=(Cat const &rhs);
		~Cat(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, Cat const &i);

#endif
