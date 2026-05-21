#include <iostream>
using namespace std;

int main()
{
    float x, y, z;

    cout << "input x: ";
    cin >> x;

    cout << "input y: ";
    cin >> y;

    cout << "input z: ";
    cin >> z;

    cout << "sum is :" << x + y + z << "\n";
    cout << "difference x&y is :" << x - y << "\n";
    cout << "product  of X ,y & Z is :" << x * y *y << "\n";
    cout << "divide of x&y is :" << x / y << "\n";
    cout << "cube of x:" << x * x * x << "\n";
    cout << "hole square of x & y is :" << (x + y) * (x + y) << "\n";
    cout << "sum of square of x ,y & z:" << x * x + y * y + z * z << "\n";
    return 0;
}
