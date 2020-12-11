/**===========================================================================================
                                B H Yean Hasan (NoYoN)
                    Patuakhali Science and Technology University
                     Faculty of Computer Science and Engineering
/*===========================================================================================**/
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <assert.h>

using namespace std;

int InterpolationSearch(int arr[], int key, int n)
{
    int low = 0, high = n-1, mid;

    while (arr[high] != arr[low] && key >= arr[low] && key <= arr[high])
    {
        mid = low + ((key - arr[low]) * (high - low) / (arr[high] - arr[low]));

        if (key == arr[mid])
            return mid;

        else if (key < arr[mid])
            high = mid - 1;

        else
            low = mid + 1;
    }

    if (key == arr[low])
        return low ;

    else
        return -1;
}

int main(void)
{
    int arr[] = {1, 3, 6, 9, 12, 16, 20, 25,26,27,28,29,93,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 16;
    printf("Found at index: %d", InterpolationSearch(arr, key, n));

    return 0;
}
