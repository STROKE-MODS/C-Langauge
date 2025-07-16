#include <stdio.h>
int n(int a);
int n(int a){
    if (a==1)
    {
        return 1;
    }
    if (a==0)
    {
        return 0;
    }
    
    return a+n(a-1);
}
int main(){
    int a;
    printf("Enter the Number you want sum of : ");
    scanf("%d",&a);
    int z = n(a);
    printf("The sum of %d is : %d\n",a,z);
    return 0;
}