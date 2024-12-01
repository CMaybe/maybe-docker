#include <gtest/gtest.h>
#include <Eigen/Dense>
#include "example.hpp"

TEST(EigenVectorTest, VectorAddition) {
    Eigen::Vector3d v1(1.0, 2.0, 3.0);
    Eigen::Vector3d v2(4.0, 5.0, 6.0);

    Eigen::Vector3d result = add_vector(v1,v2);
    Eigen::Vector3d expected(5.0, 7.0, 9.0);
    EXPECT_TRUE(result.isApprox(expected));
}

TEST(EigenVectorTest, DotProduct) {
    Eigen::Vector3d v1(1.0, 2.0, 3.0);
    Eigen::Vector3d v2(4.0, 5.0, 6.0);

    double dot_product = dot(v1,v2);
    double expected_dot = 32.0;  

    EXPECT_DOUBLE_EQ(dot_product, expected_dot);
}

TEST(EigenVectorTest, CrossProduct) {
    Eigen::Vector3d v1(1.0, 2.0, 3.0);
    Eigen::Vector3d v2(4.0, 5.0, 6.0);

    Eigen::Vector3d cross_product = cross(v1,v2);
    Eigen::Vector3d expected_cross(-3.0, 6.0, -3.0);  

    EXPECT_TRUE(cross_product.isApprox(expected_cross));
}

TEST(EigenVectorTest, VectorMagnitude) {
    Eigen::Vector3d v(3.0, 4.0, 0.0);
    double res = v.norm();
    double expected_magnitude = 5.0;  

    ASSERT_NEAR(res, expected_magnitude, 1.0e-11);
}
