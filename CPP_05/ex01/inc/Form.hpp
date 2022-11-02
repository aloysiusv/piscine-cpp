/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:36:11 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/02 15:41:37 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

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

	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_gradeToSign;
		int	const			_gradeToExec;

		class _GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};
		class _GradeTooLowException : public std::exception{
			public:
				const char *what() const throw();
		};
};

std::ostream		&operator<<(std::ostream &out, Form const &rhs);

#endif 