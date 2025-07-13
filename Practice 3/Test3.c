/*
Quick Quiz: Write a program to find grade of a student given his marks based on below:
90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50 => F
*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the Aggregate marks of the student : ",a);
    scanf("%d",&a);

    if (100>=a && a>90)
    {
        printf("The student had scored A grade.\nWith %d Marks\n",a);
    }
    else if(90>=a && a>80)
    {
        printf("The students had scored B grade.\nWith %d Marks\n",a);
    }
    else if(80>=a && a>70)
    {
        printf("The students had scored C grade.\nWith %d Marks\n",a);
    }
    else if(70>=a && a>60)
    {
        printf("The students had scored D grade.\nWith %d Marks\n",a);
    }
    else if(60>=a && a>50)
    {
        printf("The students had scored E grade.\nWith %d Marks\n",a);
    }
    else if(a>100)
    {
        printf("Enter the Correct marks out of 100.\nWith %d Marks\n",a);
    }
    else
    {
        printf("The student had failed.\nWith %d Marks\n",a);
    }
    return 0;
}