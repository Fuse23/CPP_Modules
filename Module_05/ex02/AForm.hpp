#ifndef __AForm_HPP__
# define __AForm_HPP__

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class AForm {
private:
    std::string const   _name;
    bool                _sign;
    int const           _gradeSign;
    int const           _gradeExecute;

public:
    AForm();
    AForm(std::string name, int gradeSign, int gradeExecute);
    AForm(const AForm & copy);

    AForm    &operator=(const AForm & copy);

    virtual ~AForm();

    std::string getName() const;
    bool        getSign() const;
    int         getGradeSign() const;
    int         getGradeExecute() const;

    void    beSigned(Bureaucrat & bureaucrat);

    virtual void    execute(Bureaucrat const & bureaucrat) const = 0;

    class GradeTooHighExeption : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowExeption : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class AFormAlreadySigned : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class AFormNotSign : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream & out, const AForm & AForm);

#endif // __AForm_HPP__
