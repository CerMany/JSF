
#include <iostream>

using namespace std;

class Part
{
 public:
 Part (int32_t n) : serial_number(n) {}
 int32_t get_part_name () { return lookup_name (serial_number);}
 private:
  int32_t serial_number;
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
