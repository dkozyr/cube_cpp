#include "vec3.h"
#include <iostream>

namespace lalgebra{

// Empty constructor for basis vector
vec3::vec3() : x(1), y(1) , z(1) {}

// Regular constructor
vec3::vec3(int x_, int y_, int z_) : x(x_), y(y_), z(z_) {}

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

// Implement a dot-like multiplication of vectors
vec3 vec3::mult(const vec3& b){
    vec3 result;
    result.x = x * b.x;
    result.y = y * b.y;
    result.z = z * b.z;
    return result;
}

// Implement a dot product method
int vec3::dot(const vec3& b) const {
    return x * b.x + y * b.y + z * b.z;
}

std::ostream& operator<<(std::ostream& stream, const vec3& a){
    stream << "(" << a.x << ", " << a.y << ", " << a.z << ")";
    return stream;
}

}
