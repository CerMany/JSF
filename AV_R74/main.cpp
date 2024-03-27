#include <iostream>

class MyClass {
private:
    int x;
    int y;

public:
    // Hàm tạo có sử dụng danh sách khởi tạo thành viên
    MyClass(int a, int b) : x(a), y(b) {
        // khởi tạo thành viên qua phép gán trong thân hàm tạo
        x = a;
        y = b;
    }

    // Phương thức in giá trị x và y
    void printValues() {
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
};

int main() {
    // Tạo một đối tượng của lớp MyClass
    MyClass obj(5, 10);

    // In giá trị của x và y
    obj.printValues();

    return 0;
}

