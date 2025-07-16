#include <stdio.h>
int main(){
    int a = 5;
    printf("%d %d %d \n", a, ++a, a++);
    return 0;
}

/*It will print  7,7,5 because the 
compiler sees it right to left not left to right . Keep that in mind.*/