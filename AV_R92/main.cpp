#include <iostream>

class Rectangle {
public:
    Rectangle(int width, int height) : width(width), height(height) {}

    virtual int calculateArea() const {
        return width * height;
    }

    void setWidth(int width) {
        this->width = width;
    }

    void setHeight(int height) {
        this->height = height;
    }

protected:
    int width;
    int height;
};

class Square : public Rectangle {
public:
    Square(int side) : Rectangle(side, side) {}

    void setWidth(int width) {
        this->width = width;
        this->height = width;
    }

    void setHeight(int height) {
        this->width = height;
        this->height = height;
    }
};

int main() {
    Rectangle rect(5, 10);
    std::cout << "Rectangle area: " << rect.calculateArea() << std::endl;

    Square square(5);
    std::cout << "Square area: " << square.calculateArea() << std::endl;

    Rectangle& rectRef = square;

    // Kiểm tra kết quả diện tích khi sử dụng đối tượng hình vuông thay thế hình chữ nhật
    std::cout << "Rectangle area after substituting with Square: " << rectRef.calculateArea() << std::endl;

    return 0;
}
