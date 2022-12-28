#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shruberry", 145, 137), _target("target")
{
}



ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ): AForm(src), _target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
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


void ShrubberyCreationForm::execute(Bureaucrat const & executor)  const{

	if(!this->getSigne())
		throw FormNotSignedException();
	if(executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	else
	{
		std::ofstream o(_target + "_shrubbery");
		if (!o.is_open())
		{
            std::cout << "File cannot open" << std::endl;
        	return;
   		}
		std::cout << "Shrubbery's action to : "<< this->_target << std::endl;
		o << "\t\t\t          ,@@@@@@@,\n\
            ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
         ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
        ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
        %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
        %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
        `&%\\ ` /%&'    |.|        \\ '|8'\n\
            |o|        | |         | |\n\
            |.|        | |         | |\n\
         \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */