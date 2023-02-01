#include <iostream>

class Base {
public:
    virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base    *generate() {
    srand(time(nullptr));

    int random = rand() % 3;

    if (random == 0) {
        std::cout << "Genereted a" << std::endl;
        return new A();
    } else if (random == 1) {
        std::cout << "Genereted b" << std::endl;
        return new B();
    } else {
        std::cout << "Genereted c" << std::endl;
        return new C();
    }
}

void    identify(Base *p) {
    if (dynamic_cast<A *>(p))
        std::cout << "a" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "b" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "c" << std::endl;
    else
        std::cout << "d" << std::endl;
}

void    identify(Base &p) {
    try {
        A a = dynamic_cast<A &>(p);
        std::cout << "It's a" << std::endl;
    } catch (std::bad_cast & e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        B b = dynamic_cast<B &>(p);
        std::cout << "It's b" << std::endl;
    } catch (std::bad_cast & e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        C c = dynamic_cast<C &>(p);
        std::cout << "It's c" << std::endl;
    } catch (std::bad_cast & e) {
        std::cerr << e.what() << std::endl;
    }
}

int main() {
    Base    *base = generate();
    Base    *base1 = new Base();

    identify(base);
    identify(base1);

    identify(*base);
    identify(*base1);

    delete base;
    delete base1;

    return 0;
}
