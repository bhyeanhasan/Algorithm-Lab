#include<bits/stdc++.h>

using namespace std;

bool isprime(ll n)
{
    if(n < 2)
        return 0;

    ll i = 2;

        while(i*i <= n)
        {
            if(n%i == 0)
                return 0;
            i++;
        }

     return 1;
}
int main()
{

}


