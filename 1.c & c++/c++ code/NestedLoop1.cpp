#include <iostream>
using namespace std;
// using For loop
int main()
{
    int n;
    cout << "inter lines : ";
    cin >> n;

    int m;
    cout << "inter stars : ";
    cin >> m;

    for (int i = 1; i <= n; i++)
    { // lines

        for (int j = 1; j <= m; j++)
        { // for stars
            cout << "*" << "\t";
        }
        cout << endl;
    }

    return 0;
}