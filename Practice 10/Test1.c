#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    FILE * ptr;
    int num_Reading1,num_Reading2,num_Reading3;
    ptr = fopen("Himanshu.txt","r");
    fscanf(ptr,"%d %d %d",&num_Reading1,&num_Reading2,&num_Reading3);
    printf("The value of the num Reading is : %d %d %d \n",num_Reading1,num_Reading2,num_Reading3);
    fclose(ptr);
    return 0;
}