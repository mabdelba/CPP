#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include "Form.hpp"

class Form;
class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		Bureaucrat & operator=(Bureaucrat const & rhs);

		// Accessors
		std::string const getName() const;
		int getGrade() const;

		// Member functions

		void	increment();
		void	decrement();

		void	signForm(Form &form) ;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj);



#endif /* ****************************************************** BUREAUCRAT_H */