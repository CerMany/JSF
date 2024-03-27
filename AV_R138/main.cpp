#include <iostream>

using namespace std;
int a[100];

int main()
{
    static int i=1; // line 1
     { // Bad: the i with external linkage hides the i
     // with internal linkage.
     extern int i; // line 2
     a[i] = 10; // line 3: Confusing: which i?
     }

    return 0;

}

enum XYZ_direction
{
 up,
 down
};
XYZ_direction direction;
