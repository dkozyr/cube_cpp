#include "vec3.h"

namespace lalgebra{

// Empty constructor for basis vector
vec3::vec3() : x(0), y(0), z(0) {}

// Regular constructor
vec3::vec3(int x_, int y_, int z_) : x(x_), y(y_), z(z_) {}

// Implement a dot product method
int vec3::dot(const vec3& b) const {
    return x * b.x + y * b.y + z * b.z;
}

int vec3::dot(const vec3& a, const vec3& b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

// Implement a dot-like multiplication of vectors
vec3& vec3::mult(const vec3& b){
    x *= b.x;
    y *= b.y;
    z *= b.z;
    return *this;
}

// Implement a dot-like multiplication of vectors
vec3 vec3::mult(const vec3& a, const vec3& b) {
    return vec3(a.x * b.x, a.y * b.y, a.z * b.z);
}

// Overload + operator to perform vector addition
vec3 vec3::operator+(const vec3& b) const {
    return vec3(x + b.x, y + b.y, z + b.z);
}

// Overload += operator to perform vector addition assignment
vec3& vec3::operator+=(const vec3& b){
    x += b.x;
    y += b.y;
    z += b.z;
    return *this;
}

// Overload - operator to perform vector substraction
vec3 vec3::operator-(const vec3& b) const {
    return vec3(x - b.x, y - b.y, z - b.z);
}

// Overload -= operator to perform vector substraction with assignment
vec3& vec3::operator-=(const vec3& b){
    x -= b.x;
    y -= b.y;
    z -= b.z;
    return *this;
}

// Overload == operator to perform equality check
bool vec3::operator==(const vec3& rhs) const {
    return (x == rhs.x) && (y == rhs.y) && (z == rhs.z);
}

// Overload != operator to perform equality check
bool vec3::operator!=(const vec3& rhs) const {
    return !(*this == rhs);
}

std::ostream& operator<<(std::ostream& stream, const vec3& a){
    stream << "(" << a.x << ", " << a.y << ", " << a.z << ")";
    return stream;
}

}
