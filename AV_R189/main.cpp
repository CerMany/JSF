#include <iostream>



int main() {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            for (int k = 0; k < 10; ++k) {
                std::cout << "i: " << i << ", j: " << j << ", k: " << k << std::endl;
                if (i == 2 && j == 3 && k == 4) {
                    goto end_loop; // Sử dụng goto để thoát khỏi các vòng lặp
                }
            }
        }
    }
    end_loop:
    std::cout << "End of loop" << std::endl;

    return 0;
}

