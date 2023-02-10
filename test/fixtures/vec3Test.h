#include "lalgebra.h"
using namespace lalgebra;

class vec3Test : public ::testing::Test {
    protected:
        vec3 v0_;
        vec3 v1_;
        vec3 v2_;
        vec3 v3_;
        vec3 v4_;

        void SetUp() override {
            v2_.x = 2;
            v3_.x = 2;
            v3_.y = 3;
            v4_.x = 2;
            v4_.y = 4;
            v4_.z = 4;
        }
};