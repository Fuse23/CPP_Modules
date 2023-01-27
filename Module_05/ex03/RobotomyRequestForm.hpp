#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include "AForm.hpp"
# include <random>

class RobotomyRequestForm : public AForm {
private:
    std::string _target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm & copy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm & copy);

    ~RobotomyRequestForm();

    virtual void    execute(const Bureaucrat & executor) const;

    std::string getTarget() const;
};

#endif // __ROBOTOMYREQUESTFORM_HPP__
