#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const &copy) { *this = copy; }

RPN &RPN::operator=(RPN const &copy) {
    this->_numbers = copy._numbers;
    return *this;
}

std::stack<float> const &RPN::getNumbers() const { return this->_numbers; }

bool RPN::isOperator(std::string const &s) {
    return (s == "+" || s == "-" || s == "*" || s == "/");
}

float RPN::performOperator(const float x, const float y, std::string const &_operator) {
    float result;

    switch (_operator[0]) {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        if (y != 0)
            result = x / y;
        else {
            std::cout << "Error: division by 0." << std::endl;
            exit(-1);
        }
        break;
    default:
        std::cout << "Error: bad input operator." << std::endl;
        exit(-2);
        break;
    }

    // std::cout << x << _operator << y << " = " << result << std::endl;

    return result;
}

void RPN::calculate(std::string const &input) {
    std::istringstream ss(input);
    std::string token;

    while (ss >> token && token.length() == 1) {
        if (std::isdigit(token[0]))
            this->_numbers.push(std::stoi(token));
        else if (isOperator(token)) {
            if (this->_numbers.size() < 2) {
                std::cout << "Error: bad input." << std::endl;
                return;
            }

            float y = this->_numbers.top();
            this->_numbers.pop();

            float x = this->_numbers.top();
            this->_numbers.pop();

            this->_numbers.push(performOperator(x, y, token));
        } else {
            std::cout << "Error: bad input." << std::endl;
            return;
        }
    }

    if (this->_numbers.size() != 1) {
        std::cout << "Error: bad input." << std::endl;
        return;
    }

    std::cout << this->_numbers.top() << std::endl;
}
