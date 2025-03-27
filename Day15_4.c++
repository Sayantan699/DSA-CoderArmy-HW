/*
Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number,
don’t do anything. (Use switch here)

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "JAN";
        break;
    case 2:
        cout << "FEB";
        break;
    case 3:
        cout << "MAR";
        break;
    case 4:
        cout << "APRIL";
        break;
    case 5:
        cout << "MAY";
        break;
    case 6:
        cout << "JUNE";
        break;
    case 7:
        cout << "JULY";
        break;
    case 8:
        cout << "AUG";
        break;
    case 9:
        cout << "SEPT";
        break;
    case 10:
        cout << "OCT";
        break;
    case 11:
        cout << "NOV";
        break;
    case 12:
        cout << "DEC";
        break;

    default:
        break;
    }
}