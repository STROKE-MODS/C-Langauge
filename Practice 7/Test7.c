#include <stdio.h>
void positive_number_checker(int* a, int b);
void positive_number_checker(int* a, int b){
    int j=0,k=0;
 for (int  i = 0; i < b; i++)
 {
    if (*a>0)
    {
        j++;
            }
    else if(*a==0)
        {
            k++;
        }
            a++;
    
 }
       printf("The Number which are positive are : %d\n",j);
       printf("The Number which are 0 are : %d\n",k);

}
int main(){


    int numbers[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter No. %d : ",(i+1));
        scanf("%d",&numbers[i]);
    }
    positive_number_checker(numbers,10);
    return 0;
}