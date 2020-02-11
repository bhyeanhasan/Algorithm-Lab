using System;

namespace ALGO_with_Csharp
{
    class Program
    {
        /*  PATUAKHALI SCIENCE AND TECHNOLOGY UNIVERSTIY
         *  (CIT 211 - Algorithm First Lab)
         *  Name:    Md. Babul Hasan
         *  ID:      1802027
         *  REG:     08437
         */

        // inserting a Value valu in Position position of int type Array arr
        static void Inserting(int[] arr, int position, int value)
        {
            int x = arr.Length-1;

            while(x>=position)
            {
                arr[x] = arr[x - 1];    //Values will 1 steap backward
                x--;
            }

            arr[position] = value;

        }
        

        //Deleting an element from int type Array arr in Position n
        static void Deleting(int[] arr, int n)
        {
            for(int i=0;i<arr.Length-1;i++)
            {
                if(i>=n)
                {
                    arr[i] = arr[i+1];  //Values will 1 steap forward
                }
            }
        }

        static void Traversing(int[] arr)
        {
            for (int i = 0; i < arr.Length; i++)        //loop will start at lb and end at ub 
                System.Console.Write(arr[i] + " ");
            Console.WriteLine();
        }

        static void Main(string[] args)
        {

            int[] arr = { 1, 2, 3, 4, 5, 6 };
            Console.WriteLine("Main elements: ");
            Traversing(arr);

            Array.Resize(ref arr, arr.Length + 1);
            Inserting(arr, 2, 10);
            Console.WriteLine("After Inserting 10 in position 2:");
            Traversing(arr);

            
            Deleting(arr, 3);
            Array.Resize(ref arr, arr.Length - 1);
            Console.WriteLine("After Deleting 3 in position 3:");
            Traversing(arr);
            

        }

        
    }
}
