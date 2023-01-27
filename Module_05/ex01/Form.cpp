#include "Form.hpp"

Form::Form() : _name("name"), _gradeSign(150), _gradeExecute(150) {
    std::cout << "Standart constructor" << std::endl;
}

Form::Form(const std::string name, int gredeSign, int gredeExecute) :
            _name(name), _sign(false), _gradeSign(gredeSign), _gradeExecute(gredeExecute) {

    std::cout << "Construct Form " << this->_name << ", grade to sign " << this->_gradeSign << std::endl;

    if (this->_gradeSign < MAX_GRADE || this->_gradeExecute < MAX_GRADE)
        throw GradeTooHighExeption();
    if (this->_gradeSign > MIN_GRADE || this->_gradeExecute > MIN_GRADE)
        throw GradeTooLowExeption();
}

Form::Form(const Form & copy) :
            _name(copy.getName()), _sign(false), _gradeSign(copy.getGradeSign()), _gradeExecute(copy.getGradeExecute()) {

    std::cout << "Copy constructor" << std::endl;
}

Form::~Form() {
    std::cout << "Destructor called" << std::endl;
}

Form    &Form::operator=(const Form & copy) {
    std::cout << "Copy operrator called" << std::endl;

    if (this != &copy)
        this->_sign = copy.getSign();
    return *this;
}

std::string Form::getName() const { return this->_name; }

bool    Form::getSign() const { return this->_sign; }

int Form::getGradeSign() const { return this->_gradeSign; }

int Form::getGradeExecute() const { return this->_gradeExecute; }

void    Form::beSigned(Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeSign)
        throw GradeTooHighExeption();
    if (this->_sign)
        throw FormAlreadySigned();
    this->_sign = true;
}

const char* Form::GradeTooHighExeption::what() const throw() {
    return "Form grade is too high!";
}

const char* Form::GradeTooLowExeption::what() const throw() {
    return "Form grede is too low!";
}

const char* Form::FormAlreadySigned::what() const throw() {
    return "Form already sign!";
}

std::ostream    &operator<<(std::ostream & out, const Form & form) {
    out << "Form: " << form.getName() << ", sign: " << form.getSign()
        << ", grade to sign: " << form.getGradeSign() << ", grade to execute: "
        << form.getGradeExecute() << std::endl;

    return out;
}
