#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15;

    // Sử dụng toán tử comma để gán giá trị cho các biến

    int result = (a += 2, b += 3, c += 5); // Kết quả của expressionN là c+=5

    cout << "a = " << a << endl; // a = 7
    cout << "b = " << b << endl; // b = 13
    cout << "c = " << c << endl; // c = 20
    cout << "result = " << result << endl; // result = 20

    return 0;
}

