/*
Write a program to convert decimal numbers to Octal numbers.

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int rem = 0, mul = 1, ans = 0;
    while (n > 0)
    {
        rem = n % 8;
        n = n / 8;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << ans;
    return 0;
}