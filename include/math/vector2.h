#ifndef VECTOR_2_H
#define VECTOR_2_H

#include "math.hpp"

class Vector2
{
public:
    Vector2();
    Vector2(float value);
    Vector2(float u, float v);

    float u() const { return u_; }
    float v() const { return v_; }

    // Addition of vectors
    Vector2 add(const Vector2 &other) const;

    // Subtraction of vectors
    Vector2 sub(const Vector2 &other) const;

    // Multiplication of vector by scalar
    Vector2 mult(float scalar) const;

    // Element-wise vector multiplication
    Vector2 mult(const Vector2 &other) const;

    // Dividing vector by scalar
    Vector2 div(float scalar) const;

    // Element-wise division of vectors
    Vector2 div(const Vector2 &other) const;

    // Dot product of vectors
    float dot(const Vector2 &other) const;

    // Magnitude (length) of vector
    float mag() const;

    // Square of magnitude (length) of vector
    float magSq() const;

    // Vector normalization
    Vector2 norm() const;

private:
    float u_, v_;
};

#endif // VECTOR_2_H