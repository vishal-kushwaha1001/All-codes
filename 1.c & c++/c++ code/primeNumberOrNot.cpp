#include <iostream>
using namespace std;
// using For loop
int main()
{
    int n;
    cout << "inter number  : ";
    cin >> n;
    bool isPrime = true;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            // non prime
            isPrime = false;
            break;
        }
    }
    // is prime = false  -- prime
    // is prime = true --- non prime no

    if (isPrime = false)
    {
        cout << "number is  prime Number" << endl;
    }
    else
    {
        cout << "number  is  non prime number" << endl;
    }

    return 0;
}