#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
                            AForm(target, 25, 5), _target(target) {
    std::cout << "Constructed PresidentialPardonForm, target: "
            << this->_target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy) :
                                                AForm(copy), _target(copy.getTarget()) {
    std::cout << "Copy PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(const PresidentialPardonForm & copy) {
    if (this != &copy)
        this->_target = copy.getTarget();
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructed" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const {
    return this->_target;
}

void    PresidentialPardonForm::execute(const Bureaucrat & executor) const {
    if (!this->getSign())
        throw AFormNotSign();
    if (executor.getGrade() > this->getGradeExecute())
        throw GradeTooHighExeption();

    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
