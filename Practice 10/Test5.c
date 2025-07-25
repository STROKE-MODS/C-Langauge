#include <stdio.h>
#include <string.h>
int main(){
    int num;
    FILE * ptr;
    ptr = fopen("Integer.txt","r");
    FILE * ptr2;
    ptr2 = fopen("Integer.txt","a");
    while (fscanf(ptr,"%d",&num)!=EOF)
    {
        fprintf(ptr2,"%d\n",num * 2);
    }
    fclose(ptr);
    fclose(ptr2);
    return 0;
}