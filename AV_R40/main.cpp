
struct Point {
    double x;
    double y;
};

class Rectangle {
public:
    double getLength() const { return length; }
    double getWidth() const { return width; }
    void setLength(double len) { length = len; }
    void setWidth(double wid) { width = wid; }

    double area() const { return length * width; }

private:
    double length;
    double width;

};

int main(){


    return 0;
}
