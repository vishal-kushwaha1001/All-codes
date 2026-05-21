#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "inter chractern : ";
    cin >> character;

    if (character >= 'a' && character <= 'z')
    {
        cout << "character is lower case";
    }
    else
        cout << "character is upper case";

    return 0;
}
