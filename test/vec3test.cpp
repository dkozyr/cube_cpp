#include <gtest/gtest.h>
#include "fixtures/vec3Test.h"

TEST_F(vec3Test, operatorEqualsTest) {
  EXPECT_TRUE(v0_ == v0_);
  EXPECT_TRUE(v0_ == v1_);
  EXPECT_TRUE(v1_ == v0_);
  EXPECT_FALSE(v0_ == v2_);
  EXPECT_FALSE(v2_ == v3_);
  EXPECT_FALSE(v3_ == v2_);
  EXPECT_FALSE(v4_ == v3_);
}