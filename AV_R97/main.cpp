#include <iostream>

using namespace std;

void printArray(int arr[]) {
    // Kích thước của mảng không được lưu giữ
    // arr là một con trỏ tới phần tử đầu tiên của mảng
    cout << "Size of arr in printArray function: " << sizeof(arr) << endl;
    cout << "Elements of arr: ";
    for (int i = 0; i < 3; ++i) {
       cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int myArray[3] = {1, 2, 3};

    // Kích thước của mảng không được lưu giữ
    // myArray được chuyển thành một con trỏ tới phần tử đầu tiên của mảng khi truyền vào hàm
    cout << "Size of myArray in main function: " << sizeof(myArray) << endl;

    printArray(myArray);

    return 0;
}
