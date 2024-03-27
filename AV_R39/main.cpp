#include <iostream>
#include <example.h>
using namespace std;

class Square {
public:
    float area() { // The member function definition in the class declaration
        return length * width; //suggests to the compiler that the member function should be inlined
    }
private:
    float length;
    float width;
};

int main() {

   cout << "sum: " << add(4,5) << '\n';
   cout << maximum(4,7);

    return 0;
}

