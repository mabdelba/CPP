#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy", 25, 5), _target("target")
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ): AForm(src), _target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
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

void RobotomyRequestForm::execute(Bureaucrat const & executor)  const{

	if(!this->getSigne())
		throw FormNotSignedException();
	if(executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	static int drp;

    std::cout << "Robotomy's action : ";
    if(!drp)
        std::cout << _target << "has been robotomized" << std::endl;
    else
        std::cout << " the robotomy failed" << std::endl;
    drp = !drp;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */