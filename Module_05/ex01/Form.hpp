#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form {
private:
    std::string const   _name;
    bool                _sign;
    int const           _gradeSign;
    int const           _gradeExecute;

public:
    Form();
    Form(std::string name, int gradeSign, int gradeExecute);
    Form(const Form & copy);

    Form    &operator=(const Form & copy);

    ~Form();

    std::string getName() const;
    bool        getSign() const;
    int         getGradeSign() const;
    int         getGradeExecute() const;

    void    beSigned(Bureaucrat & bureaucrat);

    class GradeTooHighExeption : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowExeption : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class FormAlreadySigned : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream & out, const Form & form);

#endif // __FORM_HPP__
