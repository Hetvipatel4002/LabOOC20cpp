#include <iostream>
using namespace std;
int main()
{
    int x, y, s;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    s = x;
    x = y;
    y = s;
    cout << "After Swapping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y;
    return 0;
}