#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		void execute(Bureaucrat const & executor)  const;

	private:
			std::string _target;

};


#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */