#include <iostream>
#include "structure/vec.h"

int main(int, char**) {
    vec3 a = vec3(1, 1, 1);
    vec3 b = vec3(1, 1, 1);
    a += b;
    std::cout << a << std::endl;

    a -= b;
    std::cout << a << std::endl;

    a += b;
    b += vec3(3, 7, 2);
    a = a.dot(b);
    std::cout << a << std::endl;

    return 0;
}
