#include <iostream>

class vec3{
    public:
        int x, y, z;

        vec3(int x, int y, int z){
            this -> x = x;
            this -> y = y;
            this -> z = z;
        }

        vec3(){
            this -> x = 1;
            this -> y = 1;
            this -> z = 1;
        }
        
        vec3 operator+(const vec3& b){
            vec3 result;
            result.x = this -> x + b.x;
            result.y = this -> y + b.y;
            result.z = this -> z + b.z;
            return result;
        }

        vec3& operator+=(const vec3& b){
            this -> x += b.x;
            this -> y += b.y;
            this -> z += b.z;
            return *this;
        }

        vec3& operator-=(const vec3& b){
            this -> x -= b.x;
            this -> y -= b.y;
            this -> z -= b.z;
            return *this;
        }

        vec3 operator-(const vec3& b){
            vec3 result;
            result.x = this -> x - b.x;
            result.y = this -> y - b.y;
            result.z = this -> z - b.z;
            return result;
        }

        vec3 dot(const vec3& b){
            vec3 result;
            result.x = this -> x * b.x;
            result.y = this -> y * b.y;
            result.z = this -> z * b.z;
            return result;
        }

        friend std::ostream& operator<<(std::ostream& stream, const vec3& a){
            stream << "(" << a.x << ", " << a.y << ", " << a.z << ")";
            return stream;
        }

};

struct vec4{
    int x, y, z, w;
};
