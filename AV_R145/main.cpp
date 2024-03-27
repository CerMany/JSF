
#include <iostream>

using namespace std;

enum Signal_light_states_type
{
 off = -1,
 green,
 yellow,
 red
};

int main()
{
    cout << Signal_light_states_type(off) << endl;
    cout << Signal_light_states_type(green) << endl;
    cout << Signal_light_states_type(yellow) << endl;
    cout << Signal_light_states_type(red) << endl;
    return 0;
}
