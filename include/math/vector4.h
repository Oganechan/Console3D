#ifndef VECTOR_4_H
#define VECTOR_4_H

#include <cstdint>
#include <algorithm>
#include "vector3.h"

class Vector4
{
public:
    Vector4(); // Zero vector initialize
    Vector4(float value, float w = 1.0f);
    Vector4(float x, float y, float z, float w = 1.0f);
    Vector4(const Vector3 &vec3, float w = 1.0f);

    inline float x() const { return x_; }
    inline float y() const { return y_; }
    inline float z() const { return z_; }
    inline float w() const { return w_; }

    Vector4 add(const Vector4 &other) const;  // Addition of vectors
    Vector4 sub(const Vector4 &other) const;  // Subtraction of vectors
    Vector4 mult(float scalar) const;         // Multiplication of vector by scalar
    Vector4 mult(const Vector4 &other) const; // Element-wise vector multiplication
    Vector4 div(float scalar) const;          // Dividing vector by scalar
    Vector4 div(const Vector4 &other) const;  // Element-wise division of vectors

    float dot(const Vector4 &other) const; // Dot product of vectors
    float mag() const;                     // magnitude (length) of vector
    float magSq() const;                   // Square of magnitude (length) of vector
    Vector4 norm() const;                  // Vector normalization

    Vector3 xyz() const; // Extract xyz as Vector3 (drop w)

private:
    float x_, y_, z_, w_;
};

Vector4::Vector4() : x_(0.0f), y_(0.0f), z_(0.0f), w_(1.0f) {}
Vector4::Vector4(float value, float w) : x_(value), y_(value), z_(value), w_(w) {}
Vector4::Vector4(float x, float y, float z, float w) : x_(x), y_(y), z_(z), w_(w) {}
Vector4::Vector4(const Vector3 &vec3, float w) : x_(vec3.x()), y_(vec3.y()), z_(vec3.z()), w_(w) {}

Vector4 Vector4::add(const Vector4 &other) const
{
}

Vector4 Vector4::sub(const Vector4 &other) const
{
}

Vector4 Vector4::mult(float scalar) const
{
}

Vector4 Vector4::mult(const Vector4 &other) const
{
}

Vector4 Vector4::div(float scalar) const
{
}

Vector4 Vector4::div(const Vector4 &other) const
{
}

float Vector4::dot(const Vector4 &other) const
{
}

float Vector4::mag() const
{
}

float Vector4::magSq() const
{
}

Vector4 Vector4::norm() const
{
}

Vector3 Vector4::xyz() const
{
}

#endif // VECTOR_4_H