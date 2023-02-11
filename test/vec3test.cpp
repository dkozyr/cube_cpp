#include "fixtures/vec3Test.h"

class vec3Test : public ::testing::Test {
protected:
    static constexpr auto kEps = 1e-6;

protected:
    vec3 v0_;
    vec3 v1_;
    vec3 v2_;
    vec3 v3_;
    vec3 v4_;

protected:
    void SetUp() override {
        v2_.x = 2;
        v3_.x = 2;
        v3_.y = 3;
        v4_.x = 2;
        v4_.y = 4;
        v4_.z = 4;
    }

    void AssertEqual(const vec3& a, const vec3& b) {
        ASSERT_NEAR(a.x, b.x, kEps);
        ASSERT_NEAR(a.y, b.y, kEps);
        ASSERT_NEAR(a.z, b.z, kEps);
    }
};

TEST_F(vec3Test, equal) {
    auto a = vec3(1, 2, 3);
    auto b = vec3(1, 2, 3);
    ASSERT_NO_FATAL_FAILURE(AssertEqual(a, b));
    ASSERT_NO_FATAL_FAILURE(AssertEqual(a, vec3(3, 2, 1))); // fail
}

TEST_F(vec3Test, operatorEqualsTest) {
    EXPECT_TRUE(v0_ == v0_);
    EXPECT_TRUE(v0_ == v1_);
    EXPECT_TRUE(v1_ == v0_);
    EXPECT_FALSE(v0_ == v2_);
    EXPECT_FALSE(v2_ == v3_);
    EXPECT_FALSE(v3_ == v2_);
    EXPECT_FALSE(v4_ == v3_);
}