#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "input x axis :";
    cin >> x;

    cout << "input y axis :";
    cin >> y;

    if (x >= 0)
    {
        if (y >= 0)
        {
            cout << "lie in 1st quadrant";
        }
        else
            cout << "lie in 4th quadrant";
    }
    else if (y >= 0)
        cout << "lie in 2th quadrant";
    else
        cout << "lie in 3rd quadrant";

    return 0;
}
