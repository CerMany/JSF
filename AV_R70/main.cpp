#include <iostream>

class Matrix;

class Vector {
    friend Vector operator*(const Matrix& m, const Vector& v);

    float v[4];

public:
    // Constructor
    Vector() {}

    // Constructor with initialization
    Vector(float x, float y, float z, float w) {
        v[0] = x;
        v[1] = y;
        v[2] = z;
        v[3] = w;
    }

    // Print method for debugging
    void print() const {
        for (int i = 0; i < 4; ++i) {
            std::cout << v[i] << " ";
        }
        std::cout << std::endl;
    }
};

class Matrix {
    friend Vector operator*(const Matrix& m, const Vector& v);

    Vector v[4] ;

public:
    // Constructor
    Matrix() {}

    // Constructor with initialization
    Matrix(const Vector& v1, const Vector& v2, const Vector& v3, const Vector& v4) {
        v[0] = v1;
        v[1] = v2;
        v[2] = v3;
        v[3] = v4;
    }

};

Vector operator*(const Matrix& m, const Vector& v) {
    Vector r;
    for (int i = 0; i < 4; i++) {
        r.v[i] = 0;
        for (int j = 0; j < 4; j++) {
            r.v[i] += m.v[i].v[j] * v.v[j];
        }
    }
    return r;
}

int main() {
    // Example usage
    Vector v1(1, 2, 3, 4);
    Vector v2(5, 6, 7, 8);
    Vector v3(9, 10, 11, 12);
    Vector v4(13, 14, 15, 16);

    Matrix m(v1, v2, v3, v4);

    Vector result = m * v2;
    result.print();

    return 0;
}
