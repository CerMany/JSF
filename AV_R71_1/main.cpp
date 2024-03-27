#include <iostream>

using namespace std;

class Base
{
 public:
 Base()
 {
 Base::v_fun(); // Good: scope resolution operator used to specify static
 } // binding
 virtual void v_fun()
 {
 }
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
