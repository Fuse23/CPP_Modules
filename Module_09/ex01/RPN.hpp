#ifndef __RPN_HPP__
# define __RPN_HPP__

# include <iostream>
# include <sstream>
# include <string>
# include <stack>

class RPN {
private:
    std::stack<float> _numbers;

public:
    RPN();
    ~RPN();
    RPN(RPN const &copy);

    RPN &operator=(RPN const &copy);

    std::stack<float> const &getNumbers() const;

    bool isOperator(std::string const &s);
    float performOperator(const float x, const float y, std::string const &_operator);
    void calculate(std::string const &input);
};

#endif // __RPN_HPP__
