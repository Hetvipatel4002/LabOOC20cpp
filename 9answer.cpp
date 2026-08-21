#include <iostream>
using namespace std;
int main()
{
    int x, i = 1;
    cout << "Enter a number: ";
    cin >> x;
    while (i <= 10)
    {
      cout << x << " x " << i << " = " << x * i << endl;
      i++;
    }
    return 0;
}