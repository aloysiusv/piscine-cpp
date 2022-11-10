/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:28:29 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/10 18:07:21 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <stdexcept>
# include "colours.h"
# include "Form.hpp"

# define MAXGRADE	1
# define MINGRADE	150

class Form;

class Bureaucrat {
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();

		Bureaucrat			&operator=(Bureaucrat const &rhs);

		std::string const	getName() const;
		int					getGrade() const;
	
		void				gradeUp();
		void				gradeDown();
		void				signForm(Form &form);

		class GradeTooLowException : public std::exception {
			public:
				char const *error() const throw();
		};
		class GradeTooHighException : public std::exception {
			public:
				char const *error() const throw();
		};

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &rhs);	

#endif