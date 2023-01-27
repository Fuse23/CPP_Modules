#include "AForm.hpp"

AForm::AForm() : _name("name"), _gradeSign(150), _gradeExecute(150) {
    std::cout << "Standart constructor" << std::endl;
}

AForm::AForm(const std::string name, int gredeSign, int gredeExecute) :
            _name(name), _sign(false), _gradeSign(gredeSign), _gradeExecute(gredeExecute) {

    std::cout << "Construct AForm " << this->_name << ", grade to sign " << this->_gradeSign << std::endl;

    if (this->_gradeSign < MAX_GRADE || this->_gradeExecute < MAX_GRADE)
        throw GradeTooHighExeption();
    if (this->_gradeSign > MIN_GRADE || this->_gradeExecute > MIN_GRADE)
        throw GradeTooLowExeption();
}

AForm::AForm(const AForm & copy) :
            _name(copy.getName()), _sign(false), _gradeSign(copy.getGradeSign()), _gradeExecute(copy.getGradeExecute()) {

    std::cout << "Copy constructor" << std::endl;
}

AForm::~AForm() {
    std::cout << "Destructor called" << std::endl;
}

AForm    &AForm::operator=(const AForm & copy) {
    std::cout << "Copy operrator called" << std::endl;

    if (this != &copy)
        this->_sign = copy.getSign();
    return *this;
}

std::string AForm::getName() const { return this->_name; }

bool    AForm::getSign() const { return this->_sign; }

int AForm::getGradeSign() const { return this->_gradeSign; }

int AForm::getGradeExecute() const { return this->_gradeExecute; }

void    AForm::beSigned(Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeSign)
        throw GradeTooHighExeption();
    if (this->_sign)
        throw AFormAlreadySigned();
    this->_sign = true;
}

const char* AForm::GradeTooHighExeption::what() const throw() {
    return "Form grade is too high!";
}

const char* AForm::GradeTooLowExeption::what() const throw() {
    return "Form grede is too low!";
}

const char* AForm::AFormAlreadySigned::what() const throw() {
    return "Form already sign!";
}

const char* AForm::AFormNotSign::what() const throw() {
    return "Form not sign!";
}

std::ostream    &operator<<(std::ostream & out, const AForm & AForm) {
    out << "Form: " << AForm.getName() << ", sign: " << AForm.getSign()
        << ", grade to sign: " << AForm.getGradeSign() << ", grade to execute: "
        << AForm.getGradeExecute() << std::endl;

    return out;
}
