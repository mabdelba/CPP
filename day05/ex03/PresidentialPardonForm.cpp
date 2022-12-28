#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm():AForm("Presidential", 72, 45), _target("target")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("Presidential", 72, 45), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ): AForm(src), _target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::execute(Bureaucrat const & executor)const{

	if(!this->getSigne())
		throw FormNotSignedException();
	if(executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	
   	std::cout << "Presidential's action : "<<_target<<" has been pardoned by Zaphod Beeblebrox" << std::endl;

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */