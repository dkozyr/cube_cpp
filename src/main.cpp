#include <iostream>
#include "lalgebra.h"
using namespace std;

int main(int, char**) {
    using namespace lalgebra;

    auto a = vec3(1, 1, 1);
    auto b = vec3(1, 1, 1);
    a += b;
    cout << a << endl;

    a -= b;
    cout << a << endl;

    a += b;
    b += vec3(3, 7, 2);
    auto c = vec3::mult(a, b);
    a.mult(b);
    cout << "a: " << a << ", c: " << c << ", (a == c): " << (a == c) << endl;

    a.mult(b).mult(b).mult(b).mult(b).mult(b).mult(b);
    cout << "a: " << a << ", (a != c): " << (a != c) << endl;

    return 0;
}
