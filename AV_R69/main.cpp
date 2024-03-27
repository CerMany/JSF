#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Hàm thành viên không ảnh hưởng đến trạng thái của đối tượng
    double calculateArea() const {
        return length * width;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
