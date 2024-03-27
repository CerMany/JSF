#include <iostream>

// Lớp trừu tượng
class Shape {
public:
    virtual void draw() const = 0; // Phương thức trừu tượng
};

// Lớp con 1
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

// Lớp con 2
class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    Circle circle;
    Square square;

    circle.draw(); // In ra "Drawing a circle."
    square.draw(); // In ra "Drawing a square."

    return 0;
}
