#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "input number you want to sum :";
    cin >> n;

    int oddSum = 0;
    int evenSum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += i;
        }
        else {
            oddSum += i;
        }
    }
         cout <<"odd sum is :"<< oddSum <<"\n";
         cout <<"even sum is :"<< evenSum <<"\n";
    return 0;
}