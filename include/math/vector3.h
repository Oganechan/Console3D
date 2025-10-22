#ifndef VECTOR_3_H
#define VECTOR_3_H

#include "math.hpp"

class Vector3
{
public:
    Vector3(); // Zero vector initialize
    Vector3(float value);
    Vector3(float x, float y, float z);

    float x() const { return x_; }
    float y() const { return y_; }
    float z() const { return z_; }

    Vector3 add(const Vector3 &other) const;  // Addition of vectors
    Vector3 sub(const Vector3 &other) const;  // Subtraction of vectors
    Vector3 mult(float scalar) const;         // Multiplication of vector by scalar
    Vector3 mult(const Vector3 &other) const; // Element-wise vector multiplication
    Vector3 div(float scalar) const;          // Dividing vector by scalar
    Vector3 div(const Vector3 &other) const;  // Element-wise division of vectors

    float dot(const Vector3 &other) const;     // Dot product of vectors
    Vector3 cross(const Vector3 &other) const; // Cross product of vectors
    float mag() const;                         // magnitude (length) of vector
    float magSq() const;                       // Square of magnitude (length) of vector
    Vector3 norm() const;                      // Vector normalization

private:
    float x_, y_, z_;
};

Vector3::Vector3() : x_(0.0f), y_(0.0f), z_(0.0f) {}
Vector3::Vector3(float value) : x_(value), y_(value), z_(value) {}
Vector3::Vector3(float x, float y, float z) : x_(x), y_(y), z_(z) {}

Vector3 Vector3::add(const Vector3 &other) const
{
}

Vector3 Vector3::sub(const Vector3 &other) const
{
}

Vector3 Vector3::mult(float scalar) const
{
}

Vector3 Vector3::mult(const Vector3 &other) const
{
}

Vector3 Vector3::div(float scalar) const
{
}

Vector3 Vector3::div(const Vector3 &other) const
{
}

float Vector3::dot(const Vector3 &other) const
{
}

Vector3 Vector3::cross(const Vector3 &other) const
{
}

float Vector3::mag() const
{
}

float Vector3::magSq() const
{
}

Vector3 Vector3::norm() const
{
}

#endif // VECTOR_3_H