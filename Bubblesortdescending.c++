// Bubble sort for descending order O(n^2) or Sigma(n)

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    cout << endl
         << "The Modified array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}