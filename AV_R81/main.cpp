#include <iostream>

class MyClass {

public:
    MyClass(int s) : size(s) {
        data = new int[size];
    }

    // Destructor
    ~MyClass() {
        delete[] data;
    }

    // Assignment operator
    MyClass& operator=(const MyClass& other) {
        if (this != &other) { // Kiểm tra tự gán
            // Xóa dữ liệu hiện tại trước khi sao chép
            delete[] data;

            // Cấp phát bộ nhớ mới
            size = other.size;
            data = new int[size];

            // Sao chép dữ liệu từ đối tượng khác
            for (int i = 0; i < size; ++i) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }
private:
    int* data;
    int size;

};

int main() {
    MyClass obj1(5);
    obj1 = obj1; // Gán đối tượng cho chính nó

    return 0;
}
