#include <iostream>

using namespace std;

template<typename T>
T sum(T a, T b){
    return a + b;
}

int main()
{
    int result1 = sum(3, 5);
    double result2 = sum(3.2, 5.8);

    cout << "result1: " << result1 <<'\n';
    cout << "result2: " << result2 << '\n';
    return 0;
}
