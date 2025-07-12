/* Explain step by step evaluation of 3*x/y-z+k where 
x = 2 , y=z=3 , k=1 */

#include <stdio.h>
int main(){
    int x = 2 , y=3 ,z=3 , k=1;
    printf("The Equation  3*x/y-z+k where x = 2 , y=3 ,z=3 , k=1 have solution: %d\n",3*x/y-z+k);
    return 0;
}

/*Okay the Answer is coming to be zero so lets clarify it
    Firstly the equation given was 3*x/y-z+k
    So accoriding to the opator predences or priority 
    the equation accoridng to paranthesis or brackets would be 
    ((((3*x)/y)-z)+k) So lets clarify it: 
    Firstly as we know operator Assosication or the Side of calculation is left to right
    So firstly 3*x will be solved then product of 3*x is divided by y then subtrated by z and then added by k 
    Which is coming out to be 0.
    */