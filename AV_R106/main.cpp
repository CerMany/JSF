#include <iostream>

template<typename T>
class Printer{
public:
    void print(T value){
        std::cout << "Generic: " << value << '\n';
    }
};

//specializations pointer
template<typename T>
class Printer<T*> {
public:
    void print(T* ptr) {
        std::cout << "Pointer: " << *ptr << std::endl;
    }
};

int main() {
    Printer<int> printer1;
    printer1.print(10);

    int x = 20;
    Printer<int*> printer2;
    printer2.print(&x);

    return 0;
}
