#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;

typedef struct nodes
{
    int value;
    int *next;

}node;

int main()
{
            node one,two;

            one.value=5;
            two.value = 6;

            one.next=&two.value;


            cout<<*one.next;


    return 0;
}

