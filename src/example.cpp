#include "example.hpp"

Eigen::Vector3d add_vector(const Eigen::Vector3d &v1, const Eigen::Vector3d &v2) {
    return v1 + v2;
}

double dot(const Eigen::Vector3d &v1, const Eigen::Vector3d &v2) {
    return v1.dot(v2);
}

Eigen::Vector3d cross(const Eigen::Vector3d &v1, const Eigen::Vector3d &v2) {
    return v1.cross(v2);
}

double norm(const Eigen::Vector3d &v) {
    return v.norm();
}
