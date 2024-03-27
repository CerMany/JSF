#include <iostream>

using namespace std;

#define max_count 100; //Wrong: no type checking
const int16_t max_count = 100;// Correct: type checking may be performed

int main()
{
    //cout << sizeof(max_count) << endl;
    cout << sizeof(max_count) << endl;
    return 0;
}
