#include <stdio.h>
#include <string.h>
int main(){
    char a[50];
    char c[50];
    char d[50];
    printf("Enter the value of array a : ");
    fgets(d,50,stdin);
    fgets(a,50,stdin);
    puts(a);
    int b = strlen(a);
    printf("%s\n",a);
    printf("The length of the string is : %d\n",b);
    strcpy(c,a);
    printf("%s\n",c);
    
    return 0;

}