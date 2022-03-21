#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include <iostream>

class Character
{
	public:
		Character(void);
		Character(Character const &src);
		Character &operator=(Character const &rhs);
		~Character(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, Character const &i);

#endif
