// Write a program to dynamically create an array of size 6 capable of storing 6
// integers.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int n=6;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    ptr[5] = 6;

    for (int  i = 0; i < n; i++)
    {
    printf("The value of the integer is  : %d\n",ptr[i]);
    }
    
    return 0;
}