#include <iostream>

using namespace std;

int main()
{
    int x=0; // Bad: Unencapsulated global object.
    class Y {
     int x;
     public:
     Y(int y_);
     int get_x();
     void set_x();
    };
    Y y (0); // Bad: Unencapsulated global object.

    cout << "Hello World!" << endl;
    return 0;
}
