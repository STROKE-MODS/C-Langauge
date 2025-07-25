#include <stdio.h>
#include <string.h>
int main(){
    FILE * ptr;
    ptr = fopen("Data.txt","a");
    char Name[50];
    int salary;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name : ");
        scanf("%s",Name);
        printf("Enter the salary : ");
        scanf("%d",&salary);
        fprintf(ptr,"%s , %d\n",Name,salary);
    }
    fclose(ptr);
    return 0;
}