
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

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int found = RecursiveBinarySearch(arr,1,10,4);
    cout<<found<<endl;
    return 0;
}
