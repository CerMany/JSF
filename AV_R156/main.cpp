#include <iostream>

using namespace std;

struct Object{
    unsigned int x : 8;
    unsigned int y : 8;
    unsigned int : 0;
    unsigned int z : 16;
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
