#include "vec4.h"
#include <iostream>

// Regular constructor
lalgebra::vec4::vec4(int x, int y, int z, int w){
    this -> x = x;
    this -> y = y;
    this -> z = z;
    this -> w = w;
}

// Empty constructor for basis vector
lalgebra::vec4::vec4(){
    this -> x = 1;
    this -> y = 1;
    this -> z = 1;
    this -> w = 1;
}

// Overload + operator for perform vector addition
lalgebra::vec4 lalgebra::vec4::operator+(const lalgebra::vec4& b){
    lalgebra::vec4 result;
    result.x = this -> x + b.x;
    result.y = this -> y + b.y;
    result.z = this -> z + b.z;
    result.w = this -> w + b.w;
    return result;
}

// Overload += operator for perform vector addition
lalgebra::vec4& lalgebra::vec4::operator+=(const lalgebra::vec4& b){
    this -> x += b.x;
    this -> y += b.y;
    this -> z += b.z;
    this -> w += b.w;
    return *this;
}

// Overload - operator for perform vector substraction
lalgebra::vec4 lalgebra::vec4::operator-(const lalgebra::vec4& b){
    lalgebra::vec4 result;
    result.x = this -> x - b.x;
    result.y = this -> y - b.y;
    result.z = this -> z - b.z;
    result.w = this -> w - b.w;
    return result;
}

// Overload -= operator for perform vector substraction
lalgebra::vec4& lalgebra::vec4::operator-=(const lalgebra::vec4& b){
    this -> x -= b.x;
    this -> y -= b.y;
    this -> z -= b.z;
    this -> w -= b.w;
    return *this;
}

// Define a dot-like miltiplication of vectors method
lalgebra::vec4 lalgebra::vec4::mult(const lalgebra::vec4& b){
    lalgebra::vec4 result;
    result.x = this -> x * b.x;
    result.y = this -> y * b.y;
    result.z = this -> z * b.z;
    result.w = this -> w * b.w;
    return result;
}

// Define a dot product method
int lalgebra::vec4::dot(const lalgebra::vec4& b){
    int result;
    result = this -> x * b.x + this -> y * b.y + this -> z * b.z + this -> w * b.w;
    return result;
}

std::ostream& operator<<(std::ostream& stream, const lalgebra::vec4& a){
    stream << "(" << a.x << ", " << a.y << ", " << a.z << ", " << a.w << ")";
    return stream;
}