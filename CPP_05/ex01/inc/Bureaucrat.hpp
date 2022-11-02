/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:28:29 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/02 15:36:07 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <stdexcept>
# include "Form.hpp"
# include "colours.h"

# define MAXGRADE	1
# define MINGRADE	150

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

	private:
		std::string const	_name;
		int					_grade;

		class _GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};
		class _GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &rhs);	

#endif