#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
                        AForm(target, 72, 45), _target(target) {

    std::cout << "Constructed RobotomyRequestForm, target: " 
            << this->_target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy) :
                                        AForm(copy), _target(copy.getTarget()) {
    std::cout << "Copy RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & copy) {
    if (this != &copy)
        this->_target = copy.getTarget();
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructed" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const {
    return this->_target;
}

void    RobotomyRequestForm::execute(const Bureaucrat & executor) const {
    if (!this->getSign())
        throw AFormNotSign();
    if (executor.getGrade() > this->getGradeExecute())
        throw GradeTooHighExeption();

    if (std::rand() % 2)
        std::cout << this->_target << " roborization was successful!" << std::endl;
    else
        std::cout << this->_target << " robotization failed!" << std::endl;
}
