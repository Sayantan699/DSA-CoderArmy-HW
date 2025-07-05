/*
Write a program to convert binary numbers to decimal numbers using a for loop.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int mul = 1, rem = 0;
    int ans = 0;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout << ans;
    return 0;
}