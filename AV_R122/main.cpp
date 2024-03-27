#include <iostream>

using namespace std;

class Example_class
{
public:
    int32_t get_limit(void)// Sample accessor to be inlined
    {
        return limit;
    }
    void set_limt(int32_t limit_parm)// Sample mutator to be inlined
    {
        limit = limit_parm;
    }
private:
    int32_t limit;
};


int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
