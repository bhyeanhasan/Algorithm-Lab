/**===========================================================================================
                                B H Yean Hasan (NoYoN)
                     Faculty of Computer Science and Engineering
                     Patuakhali Science and Technology University
/*===========================================================================================**/
//Header Files
#include<bits/stdc++.h>
#define show(arr) for( auto &it : arr ) cout<<it<<" "
using namespace std;

long long int Fibonacci(long long int n)
{
    long long int fibValu[n];
    fibValu[0]=0;
    fibValu[1]=1;

    for(int i=2;i<n;i++)
    {
        fibValu[i] = fibValu[i-1]+fibValu[i-2];
    }

    return fibValu[n-1];
}

int main()
{

cout<<Fibonacci(50);

return 0; 
}



