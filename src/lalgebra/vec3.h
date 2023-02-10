#pragma once

#include <iostream>

namespace lalgebra{
    class vec3 {
        public:
            int x, y, z;

            vec3(int x, int y, int z);  

            vec3();
            
            vec3 operator+(const vec3& b) const;

            vec3& operator+=(const vec3& b);

            vec3& operator-=(const vec3& b);

            vec3 operator-(const vec3& b) const;

            bool operator==(const vec3 &rhs) const;

            vec3 mult(const vec3& b);

            int dot(const vec3& b);
    };
}

std::ostream& operator<<(std::ostream& stream, const lalgebra::vec3& a);

