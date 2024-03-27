#include <iostream>

using namespace std;

class Rectangle{

public:
    Rectangle(int w, int h) : width(w), height(h){}
    Rectangle& operator=(const Rectangle& rhs)
    {
    if (this != &rhs)// Check for self assignment before continuing.
    {
        width = rhs.width;
        height = rhs.height;
    }
    return *this;
    }
private:
    int width;
    int height;
};

class Base
{
 public:
 Base (int32_t x) : base_member (x) {}
 Base &operator=(const Base& rhs)
 {
 if (this != &rhs) // Check for self assignment before continuing.
 {
 base_member = rhs.base_member; // Assign members (only one member in class).
 }
 else
 {
 }
 return *this;
 }
 private:
 int32_t base_member;
};
class Derived : public Base
{
 public:
 Derived (int32_t x, int32_t y, int32_t z) : Base (x),
 derived_member_1 (y),
 derived_member_2 (z) {}
 Derived& operator=(const Derived& rhs)
 {
 if (this != &rhs) // Check for self-assignment
 {
 Base::operator=(rhs); // Copy base class elements.
 derived_member_1 = rhs.derived_member_1; // Assign all members of derived class
 derived_member_2 = rhs.derived_member_2;
 }
 else
 {
 }
 return *this;
 }
 private:
 int32_t derived_member_1;
 int32_t derived_member_2;
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

