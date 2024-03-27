
#include <iostream>

using namespace std;

class Base
{
 public:
 mf (void);
};
class Derived : public Base
{
 public:
 mf (void);
};
example_function(void)
{
 Derived derived;
 Base* base_ptr = &derived; // Points to derived
 Derived* derived_ptr = &derived; // Points to derived
 base_ptr->mf(); // Calls Base::mf() *** Different behavior for same object!!
 derived_ptr->mf(); // Calls Derived::mf()
}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
