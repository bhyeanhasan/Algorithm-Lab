#include<bits/stdc++.h>

using namespace std;

int main()
{
    pair< int,int > p;
    p.first = 10;
    p.second = 20;
    cout<<p.first<< " " <<p.second<<endl;

    pair<int,int> p2(20,30);
    cout<<p2.first<< " " <<p2.second<<endl;

    pair<int,int> p3;
    p3 = make_pair(50,50);
    cout<<p3.first<< " " <<p3.second<<endl;

    return 0;
}
