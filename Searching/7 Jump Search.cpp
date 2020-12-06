/**===========================================================================================
                                B H Yean Hasan (NoYoN)
                    Patuakhali Science and Technology University
                     Faculty of Computer Science and Engineering
/*===========================================================================================**/
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <assert.h>
#include <math.h>
using namespace std;

int JumpSearch(int arr[],int Size,int key)
{
    int Start,End;
    Start = 0;
    End = sqrt(Size);

    while(arr[End]< key && End<Size)
    {
        Start = End;
        End += sqrt(Size);
        if(End > Size-1)
        {
            End = Size;
        }
    }

    for(int i=Start; i<End ;i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int found = JumpSearch(arr,9,5);
    cout<<found<<endl;
    return 0;
}

