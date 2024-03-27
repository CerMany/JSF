#include <iostream>

using namespace std;

class Complex
{
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const& obj) //overloaded operator
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print()
    {
        cout << real << " + i" << imag << '\n';
    }

private:
    int real;
    int imag;
};

class String
{
public: // Used like this:
 // ... // String x = "abc123";
 int32_t contains ( const char c ); // int32 i = x.contains( 'b' );
 int32_t contains ( const char* cs ); // int32 j = x.contains( "bc1" );
 int32_t contains ( const String& s ); // int32 k = x.contains( x );
 // ...
};

class Vector2d {
 public:
 float operator*(const Vector2d & v); // compute dot product
};
class Vector3d {
 public:
 Vector3d operator*(const Vector3d & v); // compute cross product
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}
