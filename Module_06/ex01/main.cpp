#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

struct Data
{
    char    ch;
    int     in;
};

uintptr_t   serialize(Data *ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data    *deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main() {
    Data    *data = new Data();

    data->in = 228;
    data->ch = 'X';

    std::cout << data->ch << " " << data->in << std::endl;
    std::cout << data << std::endl;

    uintptr_t   ptr = serialize(data);

    std::cout << ptr << std::endl;
    std::cout << &ptr << std::endl;

    Data    *data1 = deserialize(ptr);

    std::cout << data1->ch << " " << data->in << std::endl;
    std::cout << data1 << std::endl;

    delete data;

    return 0;
}
