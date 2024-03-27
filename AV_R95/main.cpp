#include <iostream>

using namespace std;

enum Shape_color {red, green, blue};
class Shape
{
public:
    virtual void draw(Shape_color color = green) const;
};

class Circle : public Shape
{
public:
    virtual void draw(Shape_color color = red) const;
};

void fun()
{
    Shape* sp;

    sp = new Circle;
    sp ->draw(); //Invokes Circle::draw(green) even though the defaul parameter for Circle is red
    cout << sp << endl;
}

int main()
{
    fun();
    return 0;
}
