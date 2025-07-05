#include <iostream>
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n < 1)
    {
        return false;
    }
    while (n % 2 == 0)
    {
        n = n / 2;
    }
    if (n == 1)
        return true;
    return false;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << isPowerOfTwo(n);
}
