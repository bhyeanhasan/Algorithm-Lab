#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[1000];
ll fib(ll n)
{
    arr[0]=0;
    arr[1]=1;
    for(ll i=2;i<=n;i++)
        arr[i]=arr[i-1]+arr[i-2];
    return arr[n];

}
int main()
{
    ll n ;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
