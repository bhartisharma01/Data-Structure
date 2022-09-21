#include <iostream>
using namespace std;

int main()
{
    int num ;
    cout << "Enter the number to be checked" << endl;
    cin >> num;
    if ((num % 4 == 0) && (num % 100 != 0) || (num % 400 == 0))
    {
        cout << num << " is a prime number";
    }
    else
    {
        cout << num << "is not a prime number";
    }
    return 0;
}