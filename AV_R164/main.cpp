#include <iostream>

int main() {
    unsigned int x = 10;

    // Vi phạm luật: toán hạng bên phải (n) lớn hơn hoặc bằng kích thước của x (32 bits)
    int n = 1;
    unsigned int result = x >> n;

    std::cout << "Result: " << result << std::endl;

    return 0;
}
