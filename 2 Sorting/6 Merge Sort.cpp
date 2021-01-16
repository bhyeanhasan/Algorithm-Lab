/**===========================================================================================
                                B H Yean Hasan (NoYoN)
                    Patuakhali Science and Technology University
                     Faculty of Computer Science and Engineering
/*===========================================================================================**/
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <assert.h>
#define show(arr) for( auto &it : arr ) cout<<it<<" "
using namespace std;

void Merge(int value[],int lower, int mid, int upper)
{
    int i = lower;
    int j = mid+1;
    int k = lower;
    int arr[upper+1];

    while(i<=mid && j<=upper)
    {
        if(value[i] <= value[j])
        {
            arr[k] = value[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = value[j];
            j++;
            k++;
        }
    }

    if(i>mid)
    {
        while(j <= upper)
        {
            arr[k] = value[j];
            j++;
            k++;
        }
    }

    if(j>upper)
    {
        while (i <= mid)
        {
            arr[k] = value[i];
            i++;
            k++;
        }
        
    }

    for(int i=lower; i<=upper; i++)
    {
        value[i] = arr[i];
    }

}

void MergeSort(int value[],int lower,int upper)
{
    if(lower < upper)
    {
        int mid = (lower+upper)/2;
        MergeSort(value,lower,mid);
        MergeSort(value,mid+1,upper);
        Merge(value,lower,mid,upper);
    }
}

int main()
{
    int valu[] = {5,8,4,2,1,3,9,7,4,5,3,7,1,400,500,55,0,6};
    int upper = sizeof(valu)/sizeof(valu[0]);
    int lower = 0;

    MergeSort(valu,lower,upper-1);

    show(valu);
    return 0;
}
