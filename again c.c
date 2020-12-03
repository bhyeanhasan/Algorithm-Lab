#include<stdio.h>

void Traverse(int ARR[], int lb, int ub);
void Insert(int ARR[], int N, int K, int ITEM);
void Delete(int ARR[], int N, int K, int ITEM);



int main()
{
        int Array[100];

        Array[1] = 5;   Array[2] = 10;
        Array[3] = 15;   Array[4] = 20;
        Array[5] = 25;   Array[6] = 30;


        int lb=1;
        int ub = 6;
        int N = 6;
        int K = 4;
        int ITEM = 50;

        Traverse(Array,lb,ub);



       Insert(Array,N,K,ITEM);

        N = N+1;
        K = 5;

       Delete(Array,N,K,ITEM);



}


void Insert(int ARR[], int N, int K, int ITEM)
{
        int J = N;
        while( J>=K)
        {
            ARR[J+1] = ARR[J];

            J--;
        }

        ARR[K] = ITEM;
        N= N+1;

        for(int i=1;i<=N;i++)
            printf("%d ",ARR[i]);
        printf("\n");


}

    void Delete(int ARR[], int N, int K, int ITEM)
    {

        for (int J=K; J < N; J++) {

            ARR[J] = ARR[J+1];

        }

        N= N-1;

        for(int i=1;i<=N;i++)
            printf("%d ",ARR[i]);
            printf("\n");
    }

    void Traverse(int ARR[], int lb, int ub)
    {
        int K =lb;

        while(K<=ub)
        {
            printf("%d ",ARR[K]);
            K++;
        }

        printf("\n");


    }



