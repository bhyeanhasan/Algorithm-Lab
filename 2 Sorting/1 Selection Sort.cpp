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

int SelectionSort(int arr[],int n)
{
    int Min;

    for(int i=0; i<n-1; i++)
    {
        Min = i;

        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[Min])
            {
                Min = j;
            }
        }

        swap(arr[i],arr[Min]);
    }
}

int main()
{
    int arr[] = {5,8,4,2,1,3,9,7,4,5,3,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    SelectionSort(arr,n);

    show(arr);
    return 0;
}






















