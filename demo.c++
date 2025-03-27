#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum = 0;
        for (char c : s)
        {
            if (isdigit(c))
            {
                sum += c - '0';
            }
        }
        cout << sum << endl;
    }
    return 0;
}
