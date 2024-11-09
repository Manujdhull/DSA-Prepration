// Selection Sort

// Selection sort is a sorting algorithm that fetches the smallest element from the given array and separates it from the array to the beginning position

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;

    for (int i = 0; i < n; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
                mini = j;
        }
        swap(arr[i], arr[mini]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}