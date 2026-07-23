#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "After Swapping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y;
    return 0;
}