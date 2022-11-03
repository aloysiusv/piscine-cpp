/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:48:39 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/04 00:18:38 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

	public:
		Intern();
		Intern(std::string target);
		Intern(Intern const &src);
		~Intern();

		Intern&	operator=(Intern const &src);

        AForm    *makeForm(std::string formName, std::string target);

		class FormNotFoundException : public std::exception {
			public:
				virtual char const *error() const throw();
		};
};

#endif