/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:28:29 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 22:26:24 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <stdexcept>
# include <fstream>
# include "colours.h"
# include "AForm.hpp"

# define MAXGRADE	1
# define MINGRADE	150

class AForm;
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
		void				signForm(AForm &form);
		void				executeForm(AForm const &form) const;
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