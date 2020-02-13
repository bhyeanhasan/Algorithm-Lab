/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>


using namespace std;
void add (vector<int> adj[], int karSathe, int keConnected);
void viewGraph(vector<int> adj[],int vartex);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    int vartex = 5;


    vector<int> adj[vartex];

    add(adj,0,1);
    add(adj,0,4);
    add(adj,1,0);
    add(adj,1,2);
    add(adj,1,3);
    add(adj,1,4);
    add(adj,2,1);
    add(adj,3,1);
    add(adj,2,3);
    add(adj,3,2);
    add(adj,3,4);
    add(adj,4,0);
    add(adj,4,1);
    add(adj,4,3);

    viewGraph(adj,vartex);

    return 0;
}

void add (vector<int> adj[], int karSathe, int keConnected)
{
    adj[karSathe].push_back(keConnected);
}

void viewGraph(vector<int> adj[],int vartex)
{
    for(int i=0;i<vartex;i++)
    {
        cout<<i<<" sathe connected :";
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<"  ";    // ekhane i hocce kar sathe ar j hocce keke
        }
        cout<<endl;
    }
}

