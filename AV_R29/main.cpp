#include <iostream>

using namespace std;

#define max(a,b)((a>b)?a:b) //Wrong macro

inline int32_t maxf(int32_t a, int32_t b)//Correct: inline function
{
    return (a>b)?a:b;
}

int main()
{
    cout << "Hello World!" << endl;
    cout << max(7,5) << '\n';
    cout << maxf(65,54) << '\n';
    return 0;
}
