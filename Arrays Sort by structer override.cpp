#include<bits/stdc++.h>

using namespace std;

struct student
{
    string name;
    int id;
    int age;

    bool operator < (const student &var) const
    {
        if(id < var.id)
            return id < var.id; //mane true;
        else if(id == var.id && age < var.age)
            return age < var.age; //mane true
        else
            return false;
    }
};


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

    sort(arr,arr+3);

    for(int i=0; i<3; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].id<<" "<<arr[i].age<<endl;
    }

    return 0;
}

