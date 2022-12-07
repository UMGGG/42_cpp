#pragma once

#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm
{
	private:
			const std::string target;
	public:
			RobotomyRequestForm();
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(const RobotomyRequestForm &r);
			~RobotomyRequestForm();
			RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
			std::string getTarget() const;
			void execute(Bureaucrat const & executor)const;
};
