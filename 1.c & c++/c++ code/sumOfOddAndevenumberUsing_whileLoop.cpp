#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "input number you want to sum :";
    cin >> n;
    int i= 1;
    int oddSum = 0;
    int evenSum = 0;

    while(i<= n)
    {
        if (i % 2 == 0) // 
        {
            evenSum += i;
            i++;
        }
        else {
            oddSum += i;
            i++;
        }
    }
         cout <<"odd sum is :"<< oddSum <<"\n";
         cout <<"even sum is :"<< evenSum <<"\n";
    return 0;
}