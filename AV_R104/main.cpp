#include <iostream>

// Khai báo sự chuyên biệt của template trước khi sử dụng
template<typename T>
class MyClass;

// Sự chuyên biệt của template cho kiểu int
template<>
class MyClass<int> {
public:
    void print() {
        std::cout << "Specialization for int" << std::endl;
    }
};

template<class T> class List{};
List<int32_t*> li;
template<class T> class List<T*>{};  //Error: this specialization should be used
                                    // for li in the previous statement.

int main() {

    MyClass<int> obj;
    obj.print();

    return 0;
}
