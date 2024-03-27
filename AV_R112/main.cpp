#include <iostream>

using namespace std;
class X{

};

X& f (float a)
{
 return *new x(a); // Error prone. Caller must remember to perform
} // the delete.
X& ref = f(1); // The caller of f() must be responsible for deleting // the memory.
delete &ref // delete must be called for every invocation of f().
X& x = f(1)*f(2)*f(3)*f(4); // Memory leak: delete not called for temporaries.


int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
