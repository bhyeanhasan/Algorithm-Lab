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

int BubbleSort(int arr[],int n)
{

    for(int step=0; step<n-1; step++) //if n then step need n-1
    {
        for(int i=0; i<n-1-step; i++) // protibar last er element ta thik jaygay ase
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }

    }
}

int main()
{
    int arr[] = {5,8,4,2,1,3,9,7,4,5,3,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr,n);

    show(arr);
    return 0;
}
