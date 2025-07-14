#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a,b,d,e=1,c=1;
    srand(time(NULL));
    a = (rand()%100)+1;
    printf("Welcome to the game \n In this game Computer will be generating a Number from 1-100 and \nYou have to guess it..\n");
    while (c)
    {
        printf("Guess the number: ");
        scanf("%d",&d);
        if (d<a){
            printf("Raise the number higher.\n");

        }
        else if(d>a){
            printf("Lower the number.\n");
        }
        else if(d==a)
        {
            printf("Congrats you had guessed it right in %d times.\n",e);
            break;
        }
        e+=1;
        
    }
    return 0;
}