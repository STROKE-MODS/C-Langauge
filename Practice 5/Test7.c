#include <stdio.h>
int main(){
    int a=3;
    for(int i=1;i<=a;i++){
        for(int k=1;k<=i;k++){
            printf("*");

        }
        for (int  j = 1; j <=(i-1); j++)
        {
            printf("*");
        }
        printf("\n\n");
    }
    return 0;
}