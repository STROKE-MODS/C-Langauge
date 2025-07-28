#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int n;
    int* ptr;
    printf("Enter the amount of arrays : ");
    scanf("%d",&n);
    ptr = realloc(ptr,15*sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        printf("Enter the number of statement : ");
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 15; i++)
    {
        printf("The value is  : %d\n",ptr[i]);
    }
    return 0;
}