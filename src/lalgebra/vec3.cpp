#include "vec3.h"
#include <iostream>

// Regular constructor
lalgebra::vec3::vec3(int x, int y, int z){
    this -> x = x;
    this -> y = y;
    this -> z = z;
}

// Empty constructor for basis vector
lalgebra::vec3::vec3(){
    this -> x = 1;
    this -> y = 1;
    this -> z = 1;
}

// Overload + operator to perform vector addition
lalgebra::vec3 lalgebra::vec3::operator+(const lalgebra::vec3& b) const {
    lalgebra::vec3 result;
    result.x = this -> x + b.x;
    result.y = this -> y + b.y;
    result.z = this -> z + b.z;
    return result;
}

// Overload += operator to perform vector addition assignment
lalgebra::vec3& lalgebra::vec3::operator+=(const lalgebra::vec3& b){
    this -> x += b.x;
    this -> y += b.y;
    this -> z += b.z;
    return *this;
}

// Overload - operator to perform vector substraction
lalgebra::vec3 lalgebra::vec3::operator-(const lalgebra::vec3& b) const {
    lalgebra::vec3 result;
    result.x = this -> x - b.x;
    result.y = this -> y - b.y;
    result.z = this -> z - b.z;
    return result;
}

// Overload -= operator to perform vector substraction with assignment
lalgebra::vec3& lalgebra::vec3::operator-=(const lalgebra::vec3& b){
    this -> x -= b.x;
    this -> y -= b.y;
    this -> z -= b.z;
    return *this;
}

// Overload == operator to perform equality check
bool lalgebra::vec3::operator==(const lalgebra::vec3& rhs) const {
    bool result = this -> x == rhs.x && this -> y == rhs.y && this -> z == rhs.z;
    return result;
}

// Implement a dot-like miltiplication of vectors
lalgebra::vec3 lalgebra::vec3::mult(const lalgebra::vec3& b){
    lalgebra::vec3 result;
    result.x = this -> x * b.x;
    result.y = this -> y * b.y;
    result.z = this -> z * b.z;
    return result;
}

// Implement a dot product method
int lalgebra::vec3::dot(const lalgebra::vec3& b){
    int result;
    result = this -> x * b.x + this -> y * b.y + this -> z * b.z;
    return result;
}

std::ostream& operator<<(std::ostream& stream, const lalgebra::vec3& a){
    stream << "(" << a.x << ", " << a.y << ", " << a.z << ")";
    return stream;
}