#include <stdio.h>
#include <string.h>


struct pointer{
    int number;
    float decimal;
    char name[50];
};

int main(){
    struct pointer p1;
    struct pointer* ptr = &p1;
    p1.number = 85;
    p1.decimal = 85.255;
    strcpy(p1.name,"Himanshu");
    printf("The value is : %d, %f, %s\n",ptr->number,ptr->decimal,ptr->name);
    
    return 0;
}