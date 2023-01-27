#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
                            AForm(target, 145, 137), _target(target) {

    std::cout << "Constructed ShrubberyCreationForm, target: "
            << this->_target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) :
                                            AForm(copy), _target(copy.getTarget()) {
    std::cout << "ShrubberyCreationForm copy" << std::endl;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & copy) {
    if (this != &copy)
        this->_target = copy.getTarget();
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm distructor" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {
    return this->_target;
}

void    ShrubberyCreationForm::execute(const Bureaucrat & executor) const {
    if (!this->getSign())
        throw AFormNotSign();
    if (executor.getGrade() > this->getGradeExecute())
        throw GradeTooHighExeption();

    std::ofstream outFile;

    try {
        outFile.open(this->_target + "_shrubbery");
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    outFile
    << "                                                         .       " << std::endl
    << "                                              .         ;        " << std::endl
    << "                 .              .              ;%     ;;         " << std::endl
    << "                   ,           ,                :;%  %;          " << std::endl
    << "                    :         ;                   :;%;'     .,   " << std::endl
    << "           ,.        %;     %;            ;        %;'    ,;     " << std::endl
    << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'      " << std::endl
    << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'       " << std::endl
    << "               ;%;      %;        ;%;        % ;%;  ,%;'         " << std::endl
    << "                `%;.     ;%;     %;'         `;%%;.%;'           " << std::endl
    << "                 `:;%.    ;%%. %@;        %; ;@%;%'              " << std::endl
    << "                    `:%;.  :;bd%;          %;@%;'                " << std::endl
    << "                      `@%:.  :;%.         ;@@%;'                 " << std::endl
    << "                        `@%.  `;@%.      ;@@%;                   " << std::endl
    << "                          `@%%. `@%%    ;@@%;                    " << std::endl
    << "                            ;@%. :@%%  %@@%;                     " << std::endl
    << "                              %@bd%%%bd%%:;                      " << std::endl
    << "                                #@%%%%%:;;                       " << std::endl
    << "                                %@@%%%::;                        " << std::endl
    << "                                %@@@%(o);  . '                   " << std::endl
    << "                                %@@@o%;:(.,'                     " << std::endl
    << "                            `.. %@@@o%::;                        " << std::endl
    << "                               `)@@@o%::;                        " << std::endl
    << "                                %@@(o)::;                        " << std::endl
    << "                               .%@@@@%::;                        " << std::endl
    << "                               ;%@@@@%::;.                       " << std::endl
    << "                              ;%@@@@%%:;;;.                      " << std::endl
    << "                          ...;%@@@@@%%:;;;;,..                   " << std::endl;

    outFile.close();
}
