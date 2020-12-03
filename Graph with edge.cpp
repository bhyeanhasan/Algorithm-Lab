/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>


using namespace std;
void add ( vector<pair<int,int>> adj[], int karSathe, int keConnected,int adge);
void viewGraph(vector<pair<int,int>> adj[],int vartex);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    int vartex = 5;


    vector<pair<int,int>> adj[vartex];

    add(adj,0,1,10);
    add(adj,0,4,20);
    add(adj,1,0,8);
    add(adj,1,2,3);
    add(adj,1,3,45);
    add(adj,1,4,23);
    add(adj,2,1,5);
    add(adj,3,1,66);
    add(adj,2,3,12);
    add(adj,3,2,123);
    add(adj,3,4,345);
    add(adj,4,0,567);
    add(adj,4,1,789);
    add(adj,4,3,890);

    viewGraph(adj,vartex);

    return 0;
}

void add ( vector<pair<int,int>> adj[], int karSathe, int keConnected,int adge)
{
    adj[karSathe].push_back(make_pair(keConnected,adge));
}

void viewGraph(vector<pair<int,int>> adj[],int vartex)
{
    for(int i=0;i<vartex;i++)
    {
        cout<<i<<" connected :"<<endl;;
        for(auto it = adj[i].begin();it != adj[i].end();it++)
        {
            cout<<it->first<<" sathe ,edge : "<<it->second<<" "<<endl;;
        }
        cout<<endl;
    }
}

