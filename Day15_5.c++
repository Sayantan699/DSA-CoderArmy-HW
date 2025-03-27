/*
Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.
*/

#include <iostream>
using namespace std;
int main()
{
    int i = 65;
    while (i < 91)
    {
        cout << (char)i << " ";
        i++;
    }
}