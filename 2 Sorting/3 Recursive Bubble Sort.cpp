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

int RecursiveBubbleSort(int arr[],int n)
{

    if(n==1)
    {
        return 0;
    }

    for(int i=0; i<n-1; i++) // protibar last er element ta thik jaygay ase
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    RecursiveBubbleSort(arr,n-1); //ses er element ta bad diye abr same kaj
}

int main()
{
    int arr[] = {5,8,4,2,1,3,9,7,4,5,3,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    RecursiveBubbleSort(arr,n);

    show(arr);
    return 0;
}
