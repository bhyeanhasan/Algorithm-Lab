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

int BinarySearch(int arr[],int n,int key)
{
    int low=0 ,high=n ,mid ,Min = -1;

    while(low <= high)
    {

        mid = low+(high-low)/2;

        if(arr[mid] == key)
        {
            high = mid-1;   //key paoar por o right e aro khujbo
        }
        else if(arr[mid] < key)
        {
            Min = mid;
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }

    }
    return Min;
}

int main()
{
    int arr[] = {1,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int found = BinarySearch(arr,15,6);
    cout<<found<<endl;
    return 0;
}
