#include<bits/stdc++.h>

using namespace std;

int main()
{
    map <int, int> mp;
    map <int, int> :: iterator it;

    mp[1]= 10;
    mp[0] = 40;
    mp[2] =  50;
    mp.insert(make_pair(3,100));
    mp.insert(make_pair(3,400));

    for(it = mp.begin(); it != mp.end(); it++)
        cout<< it->first<<" "<< it->second<<endl;

}
