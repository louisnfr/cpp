#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>

class Form
{
	public:
		Form(void);
		Form(Form const &src);
		Form &operator=(Form const &rhs);
		~Form(void);
		int	getVar(void) const;
	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, Form const &i);

#endif
