#include <iostream>

enum Color { Red, Green, Blue };

void printColor(Color color) {
    switch (color) {
        case Red:
            std::cout << "Red" << std::endl;
            break;
        case Green:
            std::cout << "Green" << std::endl;
            break;
        // Không có trường hợp cho giá trị Blue
        default:
            std::cout << "Unknown color" << std::endl;
            break;
    }
}

int main() {
    Color color = Blue;
    printColor(color);
    return 0;
}
