#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void printArray (int * arr, int size)
{
    printf ("array size: %d\n", size);

    for(int i = 0; i < size; i++)
    {
        if (i == size -1)
        {
            printf ("%d\n", arr[i]);
        }
        else 
        {
            printf ("%d, ", arr[i]);
        }
    }
}

int * insertion_sort (int * arr, int size)
{

    for(int i = 1; i < size; i++)
    {
        int key = arr[i];

        printf ("index: %d, value: %d\n", i, key);

        int j = i - 1;

        while (j >= 0 &&  arr[j] >= key)
        {
            printf ("\tarr[%d] = %d\n", j, arr[j]);

            arr[j+1] = arr[j];
            
            --j;
        }

        arr[j+1] = key;

        printArray (arr, size);
        printf ("\n---------------------\n");
              
    }
}


int main (int argc, char *argv[])
{
    int arr[]  = { 5, 3, 1, 2, 6, 12, 4321, 12, 45, 1, 26, 3, 45 };
    int size = 13;

    f (arr, size);

    return -1;
}


