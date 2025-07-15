#include <stdio.h>
int main(){
    int a=5;
    for(int i=1;i<=a;i++)
    {
      for (int b = a-i; b; b--)
      {
        printf(" ");
      }
      for (int c = 1; c <=i; c++)
      {
        printf("*");
      }
      
      for (int d = i-1; d; d--)
      {
        printf("*");
      }
      printf("\n");
      
    }
    for (int e = 1; e <= a-1; e++)
    {
        for (int b = 0; b<e; b++)
      {
        printf(" ");
      }
      for (int c = a-e; c; c--)
      {
        printf("*");
      }
      
      for (int d = a-e-1; d; d--)
      {
        printf("*");
      }
      printf("\n");
    }
    
    return 0;
}