/*
    Find the factorial of a number n using a while loop and do a while loop.

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int fact = 1;
    if (n == 0)
    {
        cout << fact;
    }
    int res = 0;
    while (n > 0)
    {
        res = fact * n;
        cout << res << " ";
        n--;
    }

    return 0;
}