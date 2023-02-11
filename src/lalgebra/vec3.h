#pragma once

#include <iostream>

namespace lalgebra{

class vec3 {
public:
    int x, y, z;

public:
    vec3();
    vec3(int x, int y, int z);  
    
    vec3 mult(const vec3& b);
    int dot(const vec3& b) const;

    vec3 operator+(const vec3& b) const;
    vec3& operator+=(const vec3& b);
    vec3 operator-(const vec3& b) const;
    vec3& operator-=(const vec3& b);
    bool operator==(const vec3 &rhs) const;
};

std::ostream& operator<<(std::ostream& stream, const vec3& a);

}
