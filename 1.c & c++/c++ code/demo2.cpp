#include <iostream>
using namespace std;
// using For loop
int main()

{
    int m;
    cout << "inter stars : ";
    cin >> m;

    int n;
    cout << "inter lines less than stars : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    { // lines

        for (int j = i; j <= m; j++)
        { // for stars
            cout << "*" ;
        }
        cout << endl;
    } 

    return 0;
}