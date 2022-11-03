/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:00:12 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 22:41:12 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(std::string const name, int toSign, int toExec);
		AForm(AForm const &src);
		virtual ~AForm();

		virtual AForm		&operator=(AForm const &rhs);
	
		std::string	const	getName() const;
		bool				getIsSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		std::string			getTarget() const;
	
		void				setSigned(bool sign);
		void				setTarget(std::string target);
	
		void				beSigned(Bureaucrat const &rhs);
		void				signAForm() const;
		virtual void		execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception {
			public:
				virtual char const *error() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual char const *error() const throw();
		};
		class BadExecRightsException : public std::exception{
			public:
				virtual char const *error() const throw();
		};
		class NotSignedException : public std::exception{
			public:
				virtual char const *error() const throw();
		};

	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_gradeToSign;
		int	const			_gradeToExec;
		std::string			_target;

};

std::ostream		&operator<<(std::ostream &out, AForm const &rhs);

#endif
