// Sort an array where moves the biggest element to last

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

    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }

    cout << endl
         << "The Modified array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}