#include <iostream>

// Base class with virtual function and non-virtual destructor
class Base {
public:
    virtual void doSomething() {
        std::cout << "Base::doSomething()" << std::endl;
    }

    ~Base() {
        std::cout << "Base destructor" << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void doSomething() override {
        std::cout << "Derived::doSomething()" << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor" << std::endl;
    }
};

int main() {
    Base* ptr = new Derived();
    ptr->doSomething();
    delete ptr; // Xóa đối tượng thông qua con trỏ của lớp cơ sở
    return 0;
}
