#include <iostream>

using namespace std;

class Shape{
public:
    int length;
    int width;

};

class Square:public Shape{
public:
    float area(){
        return length*width;
    }// area() will be inlined since it is defined
     // in the class specification.
      float morph (Shape &s); // morph() is not intended to be inlined so its
                             // implementation is contained in a separate file.
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
