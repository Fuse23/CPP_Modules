#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include <string>

# define MIN_GRADE 150
# define MAX_GRADE 1

class Bureaucrat {
private:
    std::string const   _name;
    int                 _grade;

public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat & copy);

    ~Bureaucrat();

    Bureaucrat & operator=(const Bureaucrat & copy);

    std::string getName() const;
    int         getGrade() const;

    void    upGrade();
    void    downGrade();

    class GradeTooHighExeption : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowExeption : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream & operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif //__BUREAUCRAT_HPP__
