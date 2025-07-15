/*To Print Number Pyramid*/

#include <stdio.h>
int main(){
    int a=5;
    for(int i=1;i<=a;i++){
        for (int b = a-i; b; b--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d",k);
        }
        for(int z = i-1; z;z--)
        {
            printf("%d",z);
        }
        printf("\n");
    }

    return 0;
}