#ifndef MATRIX_4_H
#define MATRIX_4_H

#include <cstdint>
#include <algorithm>
#include "vector3.h"
#include "vector4.h"

class Matrix4
{
public:
    Matrix4(); // Identity matrix
    Matrix4(const float values[16]);

    float get(int32_t row, int32_t col) const { return m_[col + 4 * row]; }        // Get element at [row][col]
    void set(int32_t row, int32_t col, float value) { m_[col + 4 * row] = value; } // Set element at [row][col]

    static Matrix4 identity();                         // Returns identity matrix
    static Matrix4 translation(const Vector3 &offset); // Translation matrix
    static Matrix4 scaling(const Vector3 &factors);    // Scaling matrix
    static Matrix4 rotationZ(float angle);             // Rotation around Z axis
    static Matrix4 rotationX(float angle);             // Rotation around X axis
    static Matrix4 rotationY(float angle);             // Rotation around Y axis

    Matrix4 multiply(const Matrix4 &other) const; // Matrix multiplication
    Vector4 multiply(const Vector4 &vec) const;   // Transform vector4

    Matrix4 transpose() const; // Returns transposed matrix
    Matrix4 inverse() const;   // Returns inverse matrix
    float determinant() const; // Calculate determinant

private:
    float m_[16];
};

Matrix4::Matrix4()
{
    std::fill(m_, m_ + 16, 0.0f);
    m_[0] = m_[5] = m_[10] = m_[15] = 1.0f;
}
Matrix4::Matrix4(const float values[16])
{
    std::copy(values, values + 16, m_);
}

Matrix4 Matrix4::identity()
{
}

Matrix4 Matrix4::translation(const Vector3 &offset)
{
}

Matrix4 Matrix4::scaling(const Vector3 &factors)
{
}

Matrix4 Matrix4::rotationZ(float angle)
{
}

Matrix4 Matrix4::rotationX(float angle)
{
}

Matrix4 Matrix4::rotationY(float angle)
{
}

Matrix4 Matrix4::multiply(const Matrix4 &other) const
{
}

Vector4 Matrix4::multiply(const Vector4 &vec) const
{
}

Matrix4 Matrix4::transpose() const
{
}

Matrix4 Matrix4::inverse() const
{
}

float Matrix4::determinant() const
{
}

#endif // MATRIX_4_H