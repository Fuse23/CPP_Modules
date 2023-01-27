#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
private:
    std::string _target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm & copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm & copy);

    ~ShrubberyCreationForm();

    virtual void    execute(const Bureaucrat & executor) const;

    std::string getTarget() const;
};

#endif // __SHRUBBERYCREATIONFORM_HPP__
