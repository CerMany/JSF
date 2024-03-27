#include <iostream>

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    // Toán tử sao chép mặc định
    // Rectangle(const Rectangle& other) = default;

    // Toán tử gán mặc định
    // Rectangle& operator=(const Rectangle& other) = default;

    void print() const {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};

int main() {
    Rectangle rect1(5, 10);
    Rectangle rect2 = rect1; // Sử dụng toán tử sao chép mặc định
    rect2.print();

    Rectangle rect3(15, 20);
    Rectangle rect4(25, 30);
    rect4 = rect3; // Sử dụng toán tử gán mặc định
    rect4.print();

    return 0;
}
