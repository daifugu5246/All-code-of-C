#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
    float a,b,c,s,area;
    cout << "Enter first side : ";
    cin >> a;
    cout << "Enter second side : ";
    cin >> b;
    cout << "Enter third side : ";
    cin >> c;
    if (a + b > c && a + c > b && b + c > a) {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "The area is ";
        cout << fixed << setprecision(4) << area;
    }
    else {
        cout << 0;
    }
    return 0;
}