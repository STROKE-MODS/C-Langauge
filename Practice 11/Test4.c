#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n=6;
    int* ptr;
    ptr = (int*)calloc(n , sizeof (int));
    for (int i = 0; i < n; i++)
    {
       printf("Enter the value : ");
       scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of the number is : %d\n",ptr[i]);
        
    }
    
    return 0;
}