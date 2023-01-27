#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("Akakyi", 1);
        Bureaucrat bureaucrat1(bureaucrat);
        std::cout << bureaucrat;
        std::cout << bureaucrat1;
        bureaucrat.downGrade();
        std::cout << bureaucrat;
        bureaucrat.upGrade();
        std::cout << bureaucrat;
        bureaucrat.upGrade();
        std::cout << bureaucrat << std::endl;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Form form("form", 0, 15);
        Form form1(form);
        std::cout << form;
        std::cout << form1 << std::endl;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Form form("form", 100, 151);
        std::cout << form << std::endl;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Form form("Capitulation", 100, 15);
        Bureaucrat bureaucrat("Vova", 101);
        form.beSigned(bureaucrat);
        std::cout << form << std::endl;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Form form("Mobilisation", 100, 15);
        Bureaucrat bureaucrat("Vova", 100);
        form.beSigned(bureaucrat);
        form.beSigned(bureaucrat); // exeption
        std::cout << form << std::endl;
    } catch (std::exception & e) {
        std::cout <<  e.what() << std::endl;
    }

    std::cout << std::endl;

    Form form("Capitulation", 100, 15);
    Bureaucrat bureaucrat("Vova", 101);
    bureaucrat.signForm(form);
    std::cout << std::endl << form << std::endl;

    std::cout << std::endl;

    Form form1("Mobilisation", 100, 15);
    Bureaucrat bureaucrat1("Vova", 100);
    bureaucrat1.signForm(form1);
    bureaucrat1.signForm(form1);
    std::cout << std::endl << form1 << std::endl;

    return 0;
}
