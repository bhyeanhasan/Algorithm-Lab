#include<bits/stdc++.h>

using namespace std;

struct student
{
    string name;
    int id;
    int age;
};

bool cmp(student first, student second)
{
    if(first.id < second.id)
        return first.id < second.id; //mane true;
    else if(first.id == second.id && first.age< second.age)
        return first.age< second.age; //mane true
    else
        return false;
}

int main()
{
    student arr[5];

    for(int i=0; i<3; i++)
    {
        cin>>arr[i].name>>arr[i].id>>arr[i].age;
    }

    for(int i=0; i<3; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].id<<" "<<arr[i].age<<endl;
    }

    sort(arr,arr+3,cmp);

    for(int i=0; i<3; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].id<<" "<<arr[i].age<<endl;
    }

    return 0;
}
