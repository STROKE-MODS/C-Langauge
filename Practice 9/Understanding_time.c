/*
To understand time we need to use library like time.h
to help ourselves.
So we are including time.h in our user snippets.
*/
#include <stdio.h>
#include <string.h>
#include <time.h>
int main(){
    time_t now_time; //Time manual
    struct tm* time_info; //Getting time
    char time_detail[100];

    time(&now_time); //Getting time now
    
    time_info = localtime(&now_time); // Converting it into local time

    strftime(time_detail,sizeof(time_info),"%H:%M:%S",time_info); //Putting now time to the array

    printf("the time is  : %s\n",time_detail); // Printing the time
    return 0;
}