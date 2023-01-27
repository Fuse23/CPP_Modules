#include "Bureaucrat.hpp"

int main() {

    try {
        Bureaucrat  bureaucrat("Leo", 1);
        std::cout << bureaucrat;
        bureaucrat.upGrade();
        std::cout << bureaucrat;
        bureaucrat.downGrade();
        std::cout << bureaucrat;
        bureaucrat.downGrade();
        std::cout << bureaucrat;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Bureaucrat bureaucrat("Raf", -1);
        std::cout << bureaucrat;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Bureaucrat bureaucrat("Don", 150);
        std::cout << bureaucrat;
        bureaucrat.downGrade();
        std::cout << bureaucrat;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
