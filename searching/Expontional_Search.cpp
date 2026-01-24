#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Binary_Search(int arr[], int left, int right, int key)
{
    int mid = (left + right) / 2;
    bool flag = false;
    while (left <= right)
    {
        if (key == arr[mid])
        {
            cout << "element found at index " << mid << endl;
            flag = true;
            break;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    if (!flag)
    {
        cout << "element not found " << endl;
    }
}
void ExpontionalSearch(int arr[], int size, int key)
{
    if (arr[0] == key)
    {
        cout << "Element found at index: 0" << endl;
        return;
    }
    int i = 1;
    while (i < size && arr[i] <= key)
    {
        i = i * 2;
    }
    int left = i / 2;
    int right = min(i, size - 1);
    Binary_Search(arr, left, right, key);
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;
    ExpontionalSearch(arr,n,key);
    return 0;
}


