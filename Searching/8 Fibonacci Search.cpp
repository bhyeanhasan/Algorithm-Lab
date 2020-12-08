/**===========================================================================================
                                B H Yean Hasan (NoYoN)
                    Patuakhali Science and Technology University
                     Faculty of Computer Science and Engineering
/*===========================================================================================**/
#include <iostream>


int min(int x, int y) { return (x<=y)? x : y; }

int fibMonaccianSearch(int arr[], int x, int n)
{
    int fibMMm2 = 0;   // (m-2)'th Fibonacci No.
    int fibMMm1 = 1;   // (m-1)'th Fibonacci No.
    int fibM = fibMMm2 + fibMMm1;  // m'th Fibonacci

    while (fibM < n)
    {
        fibMMm2 = fibMMm1;
        fibMMm1 = fibM;
        fibM  = fibMMm2 + fibMMm1;
    }

    printf("Before loop\n");
    printf("fibMMm2 = %d\nfibMMm1 = %d\nfibM = %d\n\n",fibMMm2,fibMMm1,fibM);


    int offset = -1;

    printf("Entering the loop:\n");

    while (fibM > 1)
    {
        int i = min(offset+fibMMm2, n-1);

        printf("i %d\n",i);

        if (arr[i] < x)
        {
            printf("1st condition:\n");
            fibM  = fibMMm1;
            fibMMm1 = fibMMm2;
            fibMMm2 = fibM - fibMMm1;
            offset = i;
            printf("Offset %d\n",offset);

            printf("fibMMm2 = %d\nfibMMm1 = %d\nfibM = %d\n\n",fibMMm2,fibMMm1,fibM);

        }

        else if (arr[i] > x)
        {
            printf("2nd condition:\n");

            fibM  = fibMMm2;
            fibMMm1 = fibMMm1 - fibMMm2;
            fibMMm2 = fibM - fibMMm1;
            printf("fibMMm2 = %d\nfibMMm1 = %d\nfibM = %d\n\n",fibMMm2,fibMMm1,fibM);

        }

        else return i;
    }

    if(fibMMm1 && arr[offset+1]==x)return offset+1;

    return -1;
}

int main(void)
{
    int arr[] = {1, 3, 6, 9, 12, 16, 20, 25,26,27,28,29,93,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 93;

    printf("Found at index: %d", fibMonaccianSearch(arr, x, n));
    system("pause");
    return 0;
}
