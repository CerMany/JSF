#include <iostream>

using namespace std;

long GiaiThua(int n)
{
    if (n == 0)
    {
        return 1; // điều kiện dừng
    }

    return n * GiaiThua(n - 1); // gọi đệ quy
}

int main()
{
    cout << GiaiThua(4) <<'\n';

    return 0;
}

