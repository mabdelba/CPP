#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form():_name("Form"), _signe(false), _gradeSigne(150), _gradeExecute(150)
{
}

Form::Form(std::string const name, int const gradeSigne, int const gradeExecute):_name(name), _signe(false),
_gradeSigne(gradeSigne), _gradeExecute(gradeExecute) 
{
	if(this->_gradeSigne < 1 || this->_gradeExecute < 1)
		throw GradeTooHighException();
	if(this->_gradeSigne > 150 || this->_gradeExecute > 150)
		throw GradeTooLowException();
	
}

Form::Form( const Form & src ):_name(src._name), _signe(src._signe), _gradeSigne(src._gradeSigne),
_gradeExecute(src._gradeExecute)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signe = rhs._signe;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Name: " << i.getName() << ", Signe: " << i.getSigne() << ", GradeSigne" << i.getGradeSigne() << ", GradeExecute: " << 
		i.getGradeExecute() << "." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
const char * Form::GradeTooHighException::what() const throw(){

	return "Grade too high !";
}

const char * Form::GradeTooLowException::what() const throw(){

	return "Grade too Low !";
}

void	Form::beSigned(Bureaucrat & obj)
{
	if(this->_signe == false)
	{
		if(obj.getGrade() <= this->_gradeSigne)
			this->_signe = true;
		else
			throw GradeTooLowException();
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const Form::getName() const{

	return this->_name;
}

bool Form::getSigne() const{

	return this->_signe;
}

int Form::getGradeSigne() const{

	return this->_gradeSigne;
}

int Form::getGradeExecute() const{

	return this->_gradeExecute;
}

/* ************************************************************************** */