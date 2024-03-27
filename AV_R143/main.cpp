#include <iostream>

using namespace std;

void fun_1() // Good implementation
{
 int max = f(x); // Good: max not introduced until meaningful value is
 // available
 for (int i=0 ; i<max ; ++i) // Good: i is not declared or initialized until needed
 { // Good: i is only known within the for loop’s scope
 }
}
int a[3] = {1, 2, 3};
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
