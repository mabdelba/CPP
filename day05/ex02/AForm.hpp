#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class AForm
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
		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		AForm();
		AForm(std::string const name, int const gradeSigne, int const gradeExecute);
		AForm( AForm const & src );
		~AForm();

		AForm &		operator=( AForm const & rhs );

		// Getters
		std::string const getName() const;
		bool getSigne() const ;
		int getGradeSigne() const;
		int getGradeExecute() const;

		// Member functions
		void	beSigned(Bureaucrat &obj);

		//abstract
		virtual void execute(Bureaucrat const & executor)  const = 0;


};


std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ FORM_H */