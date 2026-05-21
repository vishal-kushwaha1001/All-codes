#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "input marks  in percentage:";
    cin >> n;

    if (n >= 90)
    {
        cout << " grade A+\n" << "exclent";
    }
    else if (n >= 80)
    {
        cout << "grade A \n" << "very good";
    }
    else if (n >= 70)
        cout << "grade B\n" << "good";
    else if (n >= 60)
        cout << "grade C\n" << "average good";
    else if (n >= 50)
        cout << "grade D\n" << " good";
    else if (n >= 40)
        cout << "grade E\n" << "poor";
    else
        cout << "grade F\n" << "FAIL";
    return 0;
}