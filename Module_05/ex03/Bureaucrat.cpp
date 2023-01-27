#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() {
    std::cout << "Bureaucrat constuctor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade) {

    std::cout << "Construct bureaucrat " << this->_name << ", gread " << this->_grade << std::endl;

    if (grade > MIN_GRADE)
        throw GradeTooLowExeption();
    if (grade < MAX_GRADE)
        throw GradeTooHighExeption();
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy) : _name(copy.getName()), _grade(copy.getGrade()) {
    std::cout << "Copy bureaucrat " << this->_name << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat & copy) {
    if (this != &copy)
        this->_grade = copy.getGrade();
    return *this;
}

std::string Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }

void    Bureaucrat::upGrade() {
    this->_grade--;
    if (this->_grade < MAX_GRADE)
        throw GradeTooHighExeption();
}

void    Bureaucrat::downGrade() {
    this->_grade++;
    if (this->_grade > MIN_GRADE)
        throw GradeTooLowExeption();
}

const char* Bureaucrat::GradeTooHighExeption::what() const throw() {
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowExeption::what() const throw() {
    return "Grade too low!";
}

std::ostream    &operator<<(std::ostream & out, const Bureaucrat & bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}

void    Bureaucrat::signForm(AForm & form) try {
    form.beSigned(*this);
    std::cout << this->_name << " signed " << form.getName() << std::endl;
} catch (const std::exception & e) {
    std::cerr << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
}

void    Bureaucrat::executeForm(AForm const & form) try {
    form.execute(*this);
    std::cout << this->getName() << " executed " << form.getName() << std::endl;
} catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
}
