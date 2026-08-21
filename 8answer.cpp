#include <iostream>
using namespace std;
int main()
{
    int x;
    int f = 1;
    cout << "Enter a number: ";
    cin >> x;
    while (x > 0)
    {
     f = f * x;
     x--;
    }
    cout << "Factorial = " << f;
    return 0;
   }