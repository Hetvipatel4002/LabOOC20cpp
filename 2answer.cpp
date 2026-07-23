#include <iostream>
using namespace std;
int main()
{
    int x, y, ch;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Division";
    cout << "\n5. Modulus";
    cout << "\nEnter your choice: ";
    cin >> ch;
    switch (ch)
    {
        case 1:
            cout << "Addition = " << x + y;
            break;

        case 2:
            cout << "Subtraction = " << x - y;
            break;

        case 3:
            cout << "Multiplication = " << x * y;
            break;

        case 4:
            cout << "Division = " << x / y;
            break;

        case 5:
            cout << "Modulus = " << x % y;
            break;

        default:
            cout << "Invalid Choice";
    }
    return 0;
}