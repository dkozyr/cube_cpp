#include <iostream>
#include "lalgebra.h"
using namespace std;

int main(int, char**) {
    lalgebra::vec3 a = lalgebra::vec3(1, 1, 1);
    lalgebra::vec3 b = lalgebra::vec3(1, 1, 1);
    a += b;
    cout << a << endl;

    a -= b;
    cout << a << endl;

    a += b;
    b += lalgebra::vec3(3, 7, 2);
    a = a.mult(b);
    cout << a << endl;

    return 0;
}
