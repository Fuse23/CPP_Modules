#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const &copy) { *this = copy; }

RPN &RPN::operator=(RPN const &copy) {
    this->_numbers = copy._numbers;
    return *this;
}

std::stack<float> const &RPN::getNumbers() const { return this->_numbers; }

void RPN::calculate(std::string const &input) {
    for (size_t i = 0; i < input.size(); i++) {
        char c = input[i];

        if (c == ' ')
            continue;
        else if (std::isdigit(c))
            this->_numbers.push(c - '0');
        else if (c == '+' && this->_numbers.size() >= 2) {
            float x = this->_numbers.top();
            this->_numbers.pop();
            float y = this->_numbers.top();
            this->_numbers.pop();
            this->_numbers.push(x + y);
        } else if (c == '-' && this->_numbers.size() >= 2) {
            float x = this->_numbers.top();
            this->_numbers.pop();
            float y = this->_numbers.top();
            this->_numbers.pop();
            this->_numbers.push(x - y);
        } else if (c == '*' && this->_numbers.size() >= 2) {
            float x = this->_numbers.top();
            this->_numbers.pop();
            float y = this->_numbers.top();
            this->_numbers.pop();
            this->_numbers.push(x * y);
        } else if (c == '/' && this->_numbers.size() >= 2) {
            float x = this->_numbers.top();
            this->_numbers.pop();
            float y = this->_numbers.top();
            this->_numbers.pop();
            this->_numbers.push(x / y);
        } else {
            std::cout << "Error" << std::endl;
            return;
        }
    }

    if (this->_numbers.size() == 1) {
        float result = this->_numbers.top();
        this->_numbers.pop();

        std::cout << result << std::endl;
    } else {
        std::cout << "Error" << std::endl;
    }
}
