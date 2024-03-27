#include <iostream>

struct A {
    ~A() {
        // Non-trivial destructor
        std::cout << "Destructor of A" << std::endl;
    }
};

struct B {
    // Lớp B không có hàm hủy rõ ràng, nên nó sẽ có một hàm hủy mặc định được sinh tự động.
};

void c_03_06_driver() {
    A a_obj;
    new (&a_obj) B(); // Kết thúc vòng đời của a_obj mà không gọi hàm hủy không rõ ràng
    // ...
}

int main() {
    c_03_06_driver();
    return 0;
}
