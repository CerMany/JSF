#include <iostream>

class ResourceHolder{
public:
    ResourceHolder(int size){
        resource = new int[size];
        std::cout << "resource allocated\n";
    }
    ~ResourceHolder(){
        delete[] resource;
        std::cout << "resource deallocated\n";
    }
private:
    int* resource;
};

int main(){
    ResourceHolder holder(10);

    return 0;
}
