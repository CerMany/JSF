#include <iostream>

struct B {
    virtual void f(); // Phương thức ảo
    void mutate(); // Hàm thay đổi đối tượng
    virtual ~B(); // Hàm hủy ảo
};

struct D1 : B {
    void f() override; // Ghi đè phương thức ảo
};

struct D2 : B {
    void f() override; // Ghi đè phương thức ảo
};

void B::mutate() {
    new (this) D2; // Tạo lại đối tượng mới tại địa chỉ của this bằng cách sử dụng D2, kết thúc vòng đời của *this
    f(); // Hành vi không xác định: Gọi phương thức ảo, nhưng đối tượng đã bị thay đổi bằng D2
    // ... = this; // OK, this trỏ đến bộ nhớ hợp lệ
}

B::~B() {
    std::cout << "Destructor of B" << std::endl;
}

void D1::f() {
    std::cout << "D1::f()" << std::endl;
}

void D2::f() {
    std::cout << "D2::f()" << std::endl;
}

int main() {
    B* ptr = new D1();
    ptr->mutate(); // Gọi phương thức thay đổi đối tượng
    delete ptr;
    return 0;
}
