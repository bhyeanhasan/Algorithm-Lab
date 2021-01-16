/**===========================================================================================
                                B H Yean Hasan (NoYoN)
                    Patuakhali Science and Technology University
                     Faculty of Computer Science and Engineering
/*===========================================================================================**/
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <assert.h>
#define show(arr)        \
    for (auto &it : arr) \
    cout << it << " "
using namespace std;

int part(int arr[], int low, int high)
{
    int pivot = arr[high];

    int position = low;

    for (int i = low; i <= high; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr[i], arr[position]);
            position++;
        }
    }

    swap(arr[position], arr[high]);
    return position;
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = part(arr, low, high);
        QuickSort(arr, low, pivot - 1);
        QuickSort(arr, pivot + 1, high);
    }
}

int main()
{
    int valu[] = {5, 8, 4, 2, 1, 3, 9, 7, 4, 5, 3, 7, 1, 400, 500, 55, 0, 6};
    int upper = sizeof(valu) / sizeof(valu[0]);
    int lower = 0;

    QuickSort(valu, lower, upper - 1);

    show(valu);
    return 0;
}
