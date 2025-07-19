#include <stdio.h>

void printarray(int* a);
void printarray(int* a){

    for(int i=0; i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}
void reverse(int* a,int b);
void reverse(int* a,int b){
    int temp;
    for(int i=0;i<b/2;i++){
        temp = a[i];
        a[i]=a[b-i-1];
        a[b-i-1]=temp;
    }
}


int main(){
    int a[10];
    for(int i=0;i<10;i++){

        printf("The value of the %d is : ",(i+1));
        scanf("%d",&a[i]);
        
    }
    printarray(a);
    reverse(a,10);
    printarray(a);

    return 0;
}