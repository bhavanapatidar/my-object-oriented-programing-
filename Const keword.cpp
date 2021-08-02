#include <iostream>
using namespace std;
int main()
{
     int const x=15;
     x=90; //compile time error-const variable values cannot be changed
     int y= x+60;
     
     cout<<"x="<<x<<" | "<<"y="<<y;
     return 0;
}