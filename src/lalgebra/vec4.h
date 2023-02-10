#pragma once

#include <iostream>

namespace lalgebra{
    class vec4 {
        public:
            int x, y, z, w;

            vec4(int x, int y, int z, int w);  

            vec4();
            
            vec4 operator+(const vec4& b);

            vec4& operator+=(const vec4& b);

            vec4& operator-=(const vec4& b);

            vec4 operator-(const vec4& b);

            vec4 mult(const vec4& b);

            int dot(const vec4& b);
    };
}

std::ostream& operator<<(std::ostream& stream, const lalgebra::vec4& a);

