/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:36:11 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 12:19:27 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	public:
		Form();
		Form(std::string const name, int toSign, int toExec);
		Form(Form const &src);
		~Form();

		Form				&operator=(Form const &rhs);
	
		const std::string	getName() const;
		bool				getIsSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		void				setSigned();
	
		void				beSigned(Bureaucrat const &target);
		void				signForm() const;

		class GradeTooHighException : public std::exception {
			public:
				char const *error() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				char const *error() const throw();
		};

	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_gradeToSign;
		int	const			_gradeToExec;

};

std::ostream		&operator<<(std::ostream &out, Form const &rhs);

#endif 