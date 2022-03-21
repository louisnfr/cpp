#ifndef __ICHARACTER_HPP__
# define __ICHARACTER_HPP__

# include <iostream>

class ICharacter
{
	public:
		ICharacter(void);
		ICharacter(ICharacter const &src);
		ICharacter &operator=(ICharacter const &rhs);
		~ICharacter(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, ICharacter const &i);

#endif
