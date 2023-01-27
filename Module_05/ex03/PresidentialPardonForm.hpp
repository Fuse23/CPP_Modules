#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
    std::string _target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm & copy);
    PresidentialPardonForm  &operator=(const PresidentialPardonForm & copy);

    ~PresidentialPardonForm();

    virtual void    execute(const Bureaucrat & executor) const;

    std::string getTarget() const;
};

#endif // __PRESIDENTIALPARDONFORM_HPP__
