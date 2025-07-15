#include <stdio.h>
int main(){
    int a=5;
    for (int i = 1; i<=a; i++)
    {
      for (int j = a-i; j;j--)
      {
        printf(" ");
    }
    for (int z = 1; z <= i; z++)
    {
        printf("*");
    }

    for(int k = 2;k <= i; k++)
    {
        printf("*");
    }
    printf("\n");
}
    return 0;
}