#include <iostream>

using namespace std;


int main()
{
     int x = 5;
    {
     int x = 10;
        cout << "inter x: "<< x << '\n';
    }
    cout << "outer x: "<< x << '\n';
    return 0;
}

void fun_1(int max)
{
 int i; // Bad: i is prematurely declared (the intent is to use i in the
 // for loop only)
 // Bad: i has a meaningless value in the region of the code
 for (i=0 ; i<max ; ++i)
 {
 }
  // Bad: i should not be used here, but could be used anyway

 for(int j=0 ; j<max ; ++j) // Good: j is not declared or initialized until needed
 { // Good: j is only known within the for loop’s scope
 }
}

