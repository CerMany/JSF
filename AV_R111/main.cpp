#include <iostream>

using namespace std;

int* LocalPointer(){
    int localVar = 10;
    int* ptr = &localVar;
    return &localVar;
}

int main()
{
    int* returnPointer = LocalPointer();
    cout << *returnPointer << endl;
    return 0;
}
