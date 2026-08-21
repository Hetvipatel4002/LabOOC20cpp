#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    if (x > y && x > z)
        cout << "Largest = " << x;
    else if (y > z)
        cout << "Largest = " << y;
    else
        cout << "Largest = " << z;
    return 0;
}