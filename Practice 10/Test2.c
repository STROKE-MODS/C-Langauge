#include <stdio.h>
#include <string.h>
int main(){
    int table;
    printf("Enter the number you want table for : ");
    scanf("%d",&table);
    FILE * ptr;
    ptr = fopen("Table.txt","a");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"%d x %d = %d\n",table,(i+1),table*(i+1));
    }
    fclose(ptr);
    return 0;
}