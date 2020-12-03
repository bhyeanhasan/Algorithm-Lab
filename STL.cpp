#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    map<string,int> :: iterator it;

    mp["noyon"]=1802027;
    mp["tarit"]=1802009;
    mp["imad"] =1802039;

    mp.insert(make_pair("nipa",1802040));
    mp.insert(make_pair("rakib",1802028));

    map<string,int> mp2(mp.begin(),mp.end());

    cout<<mp["noyon"]<<endl;

    mp.erase("noyon");      //by key
    mp.erase(mp.begin());   //by iterator
    mp.erase(mp.find("nipa"),mp.find("tarit"));

    for(it = mp.begin(); it != mp.end();it++)
    {
        cout<< it->first <<" "<< it->second <<endl;
    }

    multimap <string,int> mmp;
    multimap <string,int> ::iterator iit;

    mmp.insert(make_pair("noyon",1802027));
    mmp.insert(make_pair("noyon",1802028));

    for(iit = mmp.begin(); iit != mmp.end();iit++)
    {
        cout<< iit->first <<" "<< iit->second <<endl;
    }

    set<int> s;
    set<int> ::iterator st;

    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);

    st=s.find(6);
    s.erase(st);

    for(st=s.begin(); st != s.end();st++)
    {
        cout<< *st <<endl;
    }


    pair <string,int> p("imad",1802028);
    p.first ="noyon";
    p.second = 1802027;

    cout<<p.first<<" "<<p.second<<endl;


    return 0;
}
