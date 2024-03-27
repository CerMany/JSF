#include <iostream>

class Base {
public:
    virtual void foo() {}
};

int main() {
    Base obj;
    Base* ptr = &obj;

    // So sánh con trỏ đến hàm thành viên ảo
    if (ptr->foo == ptr->foo) {
        std::cout << "Pointers are equal." << std::endl;
    } else {
        std::cout << "Pointers are not equal." << std::endl;
    }

    return 0;
}
