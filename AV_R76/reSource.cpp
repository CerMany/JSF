#include <iostream>

class Resource {
private:
    int* ptr;

public:
    // Constructor
    Resource(int value) {
        ptr = new int(value);
    }

    // Destructor
    ~Resource() {
        delete ptr;
    }

    // Copy constructor
    Resource(const Resource& other) {
        ptr = new int(*other.ptr);
    }

    // Assignment operator
    Resource& operator=(const Resource& other) {
        if (this != &other) {
            delete ptr;
            ptr = new int(*other.ptr);
        }
        return *this;
    }

    // Getter
    int getValue() const {
        return *ptr;
    }
};

int main() {
    // Tạo một đối tượng Resource
    Resource res1(5);

    // Sao chép đối tượng
    Resource res2 = res1;

    // Thay đổi giá trị của đối tượng sao chép
    res2 = Resource(10);

    // In giá trị của cả hai đối tượng
    std::cout << "res1 value: " << res1.getValue() << std::endl;
    std::cout << "res2 value: " << res2.getValue() << std::endl;

    return 0;
}
