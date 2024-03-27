#include <iostream>
using namespace std;

// Hàm tăng một số lên 10, nhưng không muốn phản ánh thay đổi này vào hàm gọi
void increaseByTen(int num) {
    num += 10; // Thay đổi tham số hình thức
}

int main() {
    int number = 5;
    increaseByTen(number); // Truyền bằng giá trị
    cout << "Number after function call: " << number << endl;
    return 0;
}
