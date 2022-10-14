#include "Zombie.hpp"

Zombie::Zombie() {
    name_ = "NoName";
}

Zombie::Zombie(std::string name) {
    name_ = name;
}

Zombie::~Zombie() {
    std::cout << name_ << " was destroyed!" << std::endl;
}

void    Zombie::announce() {
    std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
