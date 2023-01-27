#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat bureaucrat("Vova", 135);
    ShrubberyCreationForm shrubberyCreationForm("home");
    std::cout << shrubberyCreationForm << std::endl;
    bureaucrat.signForm(shrubberyCreationForm);
    std::cout << std::endl << shrubberyCreationForm << std::endl;
    try {
        shrubberyCreationForm.execute(bureaucrat);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    Bureaucrat bureaucrat1("Dima", 40);
    RobotomyRequestForm robotomyRequestForm("Robot");
    bureaucrat1.signForm(robotomyRequestForm);
    std::cout << std::endl << robotomyRequestForm << std::endl;
    try {
        robotomyRequestForm.execute(bureaucrat1);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    Bureaucrat bureaucrat2("Boris", 30);
    PresidentialPardonForm presidentialPardonForm("Chelik");
    bureaucrat2.signForm(presidentialPardonForm);
    std::cout << std::endl << presidentialPardonForm << std::endl;
    try {
        presidentialPardonForm.execute(bureaucrat2);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    Bureaucrat bureaucrat3("Alex", 1);
    PresidentialPardonForm presidentialPardonForm1("Chel");
    bureaucrat3.signForm(presidentialPardonForm1);
    bureaucrat3.executeForm(presidentialPardonForm1);

    return 0;
}
