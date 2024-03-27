#include <iostream>

int main() {
    int x = 10;
    int y = sizeof(x++); // bad

    std::cout << "x = " << x << std::endl; // Kết quả có thể không như mong đợi vì side effect không được thực hiện
    std::cout << "Size of x: " << y << std::endl;

    return 0;
}
