#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signe;
		int const			_gradeSigne;
		int const			_gradeExecute;

	public:

		class GradeTooHighException : public std::exception
		{
			public :
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char * what() const throw();
		};

		Form();
		Form(std::string const name, int const gradeSigne, int const gradeExecute);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		// Getters
		std::string const getName() const;
		bool getSigne() const ;
		int getGradeSigne() const;
		int getGradeExecute() const;

		// Member functions
		void	beSigned(Bureaucrat &obj);

};


std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */