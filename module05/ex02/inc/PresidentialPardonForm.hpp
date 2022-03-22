#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include <iostream>

class PresidentialPardonForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm(void);
		int	getVar(void) const;
	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &i);

#endif
