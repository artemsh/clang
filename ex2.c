#include <stdio.h>

#define MAX 10

int *sort(int *array, const int size)
{
    int temp;

    for(int c=0; c<size; c++) {
        for(int i=0; i<size; i++) {
            if(array[c] < array[i]) {
                temp = array[c];
                array[c] = array[i];
                array[i] = temp;
            }
        }
    }
    return array;
}

int *printArray(int *array, const int size)
{
    for(int c=0; c<size; c++) {
        printf("array[%d] = %d\n", c, array[c]);
    }
    return array;
}

int main(int argc, char *argv[])
{
    int array[MAX] = {10, 2, 49, 11, 5, 3, 98, 1, 7, 21};

    printf("Array before sort:\n");
    printArray(array, MAX);
    printf("After:\n");
    printArray(sort(array, MAX), MAX);

    return 0;
}

