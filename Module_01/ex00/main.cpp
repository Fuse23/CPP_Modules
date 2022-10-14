#include "Zombie.hpp"

int main() {
    Zombie  zombieNoName;
    zombieNoName.announce();

    Zombie  zombieName("Dasha");
    zombieName.announce();

    Zombie  *zombieAllocate;
    zombieAllocate = newZombie("Vitaly");
    zombieAllocate->announce();
    delete zombieAllocate;

    randomChump("Oleg");
}
