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

int InsertionSort(int valu[],int n)
{

    for(int i=1; i<n; i++)
    {

        int selected_position = valu[i];
        int compair_position = i-1;

        while(compair_position>=0 && valu[compair_position] > selected_position)
        {
            valu[compair_position+1] = valu[compair_position];
            compair_position = compair_position - 1;
        }

        valu[compair_position+1] = selected_position; //ek index agaya blank jaygay bose

    }

}

int main()
{
    int valu[] = {5,8,4,2,1,3,9,7,4,5,3,7,1,400,500,55};
    int n = sizeof(valu)/sizeof(valu[0]);

    InsertionSort(valu,n);

    show(valu);
    return 0;
}
