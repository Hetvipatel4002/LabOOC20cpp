#include <iostream>
using namespace std;
int main()
{
    int l, b;
    int area, p;
    cout << "Enter length and breadth: ";
    cin >> l >> b;
   area = l * b;
    p = 2 * (l + b);
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << p;
    return 0;
}