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

int RecursiveBinarySearch(int arr[],int low,int high,int key);

int ExponentialSearch(int arr[], int x, int n)
{
    if (arr[0] == x)
        return 0;

    int i = 1;

    while (i < n && arr[i] <= x)
    {
        i = i*2;
    }

    return RecursiveBinarySearch(arr, i/2, min(i, n-1), x);
}

int RecursiveBinarySearch(int arr[],int low,int high,int key)
{
    int mid;

    if(low > high)
    {
        return -1;
    }

    mid = (low+high)/2;

    if(key == arr[mid])
    {
        return mid;
    }
    else if(key > arr[mid])
    {
        RecursiveBinarySearch(arr,mid+1,high,key);
    }
    else
    {
        RecursiveBinarySearch(arr,low,mid-1,key);
    }

}

int main(void)
{
    int arr[] = {1, 3, 6, 9, 12, 16, 20, 25,26,27,28,29,93,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 9;
    printf("Found at index: %d", ExponentialSearch(arr, x, n));

    return 0;
}
