// Use the array in problem 1 to store 6 integers entered by the user.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int n=6;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d number : \n",(i+1));
        scanf("%d",&ptr[i]);
    }
    
    for (int  i = 0; i < n; i++)
    {
    printf("The value of the integer is  : %d\n",ptr[i]);
    }
    
    return 0;
}