#include <iostream>
using namespace std;
// using for loop
int main()
{
    int n;
    cout << "inter number you want to sum : ";
    cin >> n;
    int i = 1;
    int sum = 0;

    // for ( i = 1; i <= n; i++)
    // {  sum += i;    }
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "sum is :" << sum << "\n"; 
    return 0;
}