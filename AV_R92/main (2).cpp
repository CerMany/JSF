#include <iostream>

using namespace std;

class engine{
public:
    void start(){
        cout << "Start..\n";
    }
};

class car{
public:
    void startCar(){
     engine.start();
    }
private:
    engine engine;
};

int main()
{
    car car();
    return 0;
}
