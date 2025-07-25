#include <stdio.h>
#include <string.h>
int main(){
    FILE * ptr;
    FILE * ptr2;
    ptr = fopen("1stkey.txt","r");
    ptr2 = fopen("1stfile.txt","a");
    while (1)
    {
        char c = fgetc(ptr);
        if(c==EOF){
            break;
        }
        else{
            fprintf(ptr2,"%c%c",c,c);
        }

    }
    
    return 0;
}