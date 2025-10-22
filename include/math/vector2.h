#ifndef VECTOR_2_H
#define VECTOR_2_H

#include "math.hpp"

class Vector2
{
public:
    Vector2(); // Zero vector initialize
    Vector2(float value);
    Vector2(float u, float v);

    inline float u() const { return u_; }
    inline float v() const { return v_; }

    Vector2 add(const Vector2 &other) const;  // Addition of vectors
    Vector2 sub(const Vector2 &other) const;  // Subtraction of vectors
    Vector2 mult(float scalar) const;         // Multiplication of vector by scalar
    Vector2 mult(const Vector2 &other) const; // Element-wise vector multiplication
    Vector2 div(float scalar) const;          // Dividing vector by scalar
    Vector2 div(const Vector2 &other) const;  // Element-wise division of vectors

    float dot(const Vector2 &other) const; // Dot product of vectors
    float mag() const;                     // Magnitude (length) of vector
    float magSq() const;                   // Square of magnitude (length) of vector
    Vector2 norm() const;                  // Vector normalization

private:
    float u_, v_;
};

Vector2::Vector2() : u_(0.0f), v_(0.0f) {};
Vector2::Vector2(float value) : u_(value), v_(value) {};
Vector2::Vector2(float u, float v) : u_(u), v_(v) {};

Vector2 Vector2::add(const Vector2 &other) const
{
}

Vector2 Vector2::sub(const Vector2 &other) const
{
}

Vector2 Vector2::mult(float scalar) const
{
}

Vector2 Vector2::mult(const Vector2 &other) const
{
}

Vector2 Vector2::div(float scalar) const
{
}

Vector2 Vector2::div(const Vector2 &other) const
{
}

float Vector2::dot(const Vector2 &other) const
{
}

float Vector2::mag() const
{
}

float Vector2::magSq() const
{
}

Vector2 Vector2::norm() const
{
}

#endif // VECTOR_2_H