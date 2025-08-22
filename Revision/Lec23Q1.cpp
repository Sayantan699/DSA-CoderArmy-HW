#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> firstlastpos(vector<int> &nums, int target)
{
    int first = -1, last = -1;
    int start = 0, end = nums.size() - 1;

    // For first occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            end = mid - 1; // keep searching left
        }
        else if (nums[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    start = 0, end = nums.size() - 1;
    // For last occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            start = mid + 1; // keep searching right
        }
        else if (nums[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return {first, last};
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the vector: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The original vector is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sorting using bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    cout << "The elements of the vector after bubble sorting are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int k;
    cout << "Enter the target: ";
    cin >> k;

    vector<int> ans = firstlastpos(arr, k);
    cout << "First position: " << ans[0] << ", Last position: " << ans[1] << endl;
}
