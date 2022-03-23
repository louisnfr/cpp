/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:32:13 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 21:42:25 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string target = "default");
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm(void);
		virtual void	execute(void) const;
	private:
		std::string const	_target;
};

#endif
