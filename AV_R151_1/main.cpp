#include <iostream>

using namespace std;

int main()
{

    char* c1 = "Hello"; // Bad: assigned to non-const
    char c2[] = "Hello"; // Bad: assigned to non-const
    char c3[6] = "Hello"; // Bad: assigned to non-const
    c1[3] = 'a'; // Undefined (but compiles)
    cout << c1 << endl;
    const char* c4 = "Hello"; // Good
    const char c5[] = "Hello"; // Good
    const char c6[6] = "Hello"; // Good
    c6[3] = 'a'; // Compile error

    return 0;
}

int* p, q; // Probably error.
int first_button_on_top_of_the_left_box, i; // Bad: Easy to overlook

struct example{
    int value : 8; //Bad
};
