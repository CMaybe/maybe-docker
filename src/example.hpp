#pragma once
#include <Eigen/Dense>

Eigen::Vector3d add_vector(const Eigen::Vector3d &v1, const Eigen::Vector3d &v2);
Eigen::Vector3d cross(const Eigen::Vector3d &v1, const Eigen::Vector3d &v2);
double dot(const Eigen::Vector3d &v1, const Eigen::Vector3d &v2);
double norm(const Eigen::Vector3d &v);