#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm():_name("AForm"), _signe(false), _gradeSigne(150), _gradeExecute(150)
{
}

AForm::AForm(std::string const name, int const gradeSigne, int const gradeExecute):_name(name), _signe(false),
_gradeSigne(gradeSigne), _gradeExecute(gradeExecute) 
{
	if(this->_gradeSigne < 1 || this->_gradeExecute < 1)
		throw GradeTooHighException();
	if(this->_gradeSigne > 150 || this->_gradeExecute > 150)
		throw GradeTooLowException();
	
}

AForm::AForm( const AForm & src ):_name(src._name), _signe(src._signe), _gradeSigne(src._gradeSigne),
_gradeExecute(src._gradeExecute)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_signe = rhs._signe;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << "Name: " << i.getName() << ", Signe: " << i.getSigne() << ", GradeSigne" << i.getGradeSigne() << ", GradeExecute: " << 
		i.getGradeExecute() << "." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
const char * AForm::GradeTooHighException::what() const throw(){

	return "Grade too high !";
}

const char * AForm::GradeTooLowException::what() const throw(){

	return "Grade too Low !";
}

const char * AForm::FormNotSignedException::what() const throw(){

	return ("form is not signed");
}

void	AForm::beSigned(Bureaucrat & obj)
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

std::string const AForm::getName() const{

	return this->_name;
}

bool AForm::getSigne() const{

	return this->_signe;
}

int AForm::getGradeSigne() const{

	return this->_gradeSigne;
}

int AForm::getGradeExecute() const{

	return this->_gradeExecute;
}

/* ************************************************************************** */