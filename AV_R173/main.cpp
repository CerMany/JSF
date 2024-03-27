#include <iostream>
using namespace std;
int main(){
    int i =1024;
    char c = i; // Bad: (integer-to-char) implicit loss of information.
    float f = 7.3;
    int j= f; // Bad: (float-to-int) implicit loss of information.
    int k = 1234567890;
    float g = k; // Bad: (int-to-float) implicit loss of information
               // (g will be 1234567000)
    cout << g << endl;



    int* ptr = nullptr;
    *ptr = 10;
    cout << *ptr;

    return 0;
}
