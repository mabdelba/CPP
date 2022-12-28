#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat():_name("Bureaucrat"), _grade(150)
{
	std::cout << "Default Constructor called" <<std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name), _grade(grade){

	std::cout << "Parameterized Constructor called" << std::endl;
	if(this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if(this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{

	if ( this != &rhs )
	{
		std::cout << "Assignation opertaor called" << std::endl;
		this->_grade = rhs._grade;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj)
{
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::increment()
{
	if((this->_grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
	return ;
}

void	Bureaucrat::decrement(){

	if(this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	return ;
}

void	Bureaucrat::signForm(AForm & form) {

	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout<<"the form cannot be executed because of : "<< e.what() << std::endl;
	}
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const Bureaucrat::getName() const{

	return this->_name;
}

int  Bureaucrat::getGrade() const{

	return this->_grade;
}


/* ************************************************************************** */

const char* Bureaucrat::GradeTooHighException::what() const throw(){

	return "Grade too High !";
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){

	return "Grade too Low !";
}