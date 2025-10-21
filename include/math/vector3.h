#ifndef VECTOR_3_H
#define VECTOR_3_H

#include "math.hpp"

class Vector3
{
public:
    Vector3();
    Vector3(float value);
    Vector3(float x, float y, float z);

    float x() const { return x_; }
    float y() const { return y_; }
    float z() const { return z_; }

    // Addition of vectors
    Vector3 add(const Vector3 &other) const;

    // Subtraction of vectors
    Vector3 sub(const Vector3 &other) const;

    // Multiplication of vector by scalar
    Vector3 mult(float scalar) const;

    // Element-wise vector multiplication
    Vector3 mult(const Vector3 &other) const;

    // Dividing vector by scalar
    Vector3 div(float scalar) const;

    // Element-wise division of vectors
    Vector3 div(const Vector3 &other) const;

    // Dot product of vectors
    float dot(const Vector3 &other) const;

    // Cross product of vectors
    Vector3 cross(const Vector3 &other) const;

    // magnitude (length) of vector
    float mag() const;

    // Square of magnitude (length) of vector
    float magSq() const;

    // Vector normalization
    Vector3 norm() const;

    // Rotation of vector in the YZ plane
    Vector3 rotateX(float angle) const;

    // Rotation of vector in the XZ plane
    Vector3 rotateY(float angle) const;

    // Rotation of vector in the XY plane
    Vector3 rotateZ(float angle) const;

private:
    float x_, y_, z_;
};

#endif // VECTOR_3_H