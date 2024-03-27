#include <iostream>
#include <bitset>



int main() {
    float floatingNumber = 3.14f;

    std::cout << "gia tri: " << floatingNumber << std::endl;

    // Chuyển đổi dấu phẩy động thành dạng bit
    std::bitset<sizeof(float) * 8> bits(*reinterpret_cast<unsigned int*>(&floatingNumber));

    std::cout << "bieu dien phay dong: " << bits << std::endl;

    return 0;
}

class A
{
 A()
 {
 coefficient[0] = 1.23; // Good
 coefficient[1] = 2.34; // Good
 coefficient[2] = 3.45; // Good
 }
 private:
 float coefficient[3]; // Cannot be initialized via the member initialization list.
};
