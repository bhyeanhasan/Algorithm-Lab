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

int RecInsertionSort(int arr[],int n)
{
    if (n < 1)
        return 0;

    RecInsertionSort( arr, n-1 );

    // rec er por sru hobe n=1 theke

    int last = arr[n];
    int j = n-1;


    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}

int main()
{
    int valu[] = {5,8,4,2,1,3,9,7,4,5,3,7,1,400,500,55};
    int n = sizeof(valu)/sizeof(valu[0]);

    RecInsertionSort(valu,n);

    show(valu);
    return 0;
}
