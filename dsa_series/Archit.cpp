#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c, b, a;
    while (1)
    {
        cout << "Enter your choice for:\n";
        cout << "\n1. for area of triangle: ";
        cout << "\n2. for area of rectangle: ";
        cout << "\n3. for area of square: ";
        cout << "\n4. for area of circle: \n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the length of sides a,b,c\n";
            cin >> a >> b >> c;
            cout << "Area of triangle with sides a= " << a << " b= " << b << " c= "<< " is " << a * b * c << " units\n";
            break;
        case 2:
            cout << "Enter the length of sides a and b\n";
            cin >> a >> b;
            cout << "Area of rectangle with length= " << a << " and breadth= " << b << " is " << a * b << " units\n";
            break;
        case 3:
            cout << "Enter the length of side a\n";
            cin >> a;
            cout << "Area of square with length= " << a << " is " << a * a << " units\n";
            break;
        case 4:
            cout << "Enter radius of the circle ";
            cin >> a;
            cout << "Area of circle with radius = " << a << " is " << 3.14 * r * r << " units\n";
            break;
        default:
            cout << "Invalid input\n";
            return 0;
            break;
        }
    }
    return 0;
}