#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
    srand(time(0));
    char user_choice[100];
    int computer_generated = rand()%3+1;
    // 1-->Snake
    // 2-->_Water
    // 3-->Gun
    while (1)
    {
        printf("\t\t\t\t\t\t<------WELCOME------>\n");
        printf("Enter your choice : \n1.Snake\n2.Water\n3.Gun\n");
        scanf("%s",user_choice);
        
        if (strcmp(user_choice,"Snake")==0 && computer_generated==2)
        {
            printf("      👑👑👑👑👑👑👑👑👑👑👑\n");
            printf("       /\\     /\\     /\\     /\\\n");
            printf("      {  }   {  }   {  }   {  }\n");
            printf("       ||     ||     ||     ||\n");
            printf("    ===========================\n");
            printf("        |      YOU WIN     |\n");
            printf("    ===========================\n");
            break;

        }
        else if ((strcmp(user_choice,"Gun")==0) && computer_generated==1)
        {
         
            printf("       👑👑👑👑👑👑👑👑👑👑👑\n");
            printf("       /\\     /\\     /\\     /\\\n");
            printf("      {  }   {  }   {  }   {  }\n");
            printf("       ||     ||     ||     ||\n");
            printf("    ===========================\n");
            printf("        |      YOU WIN     |\n");
            printf("    ===========================\n");
            break;

        }
        else if ((strcmp(user_choice,"Water")==0) && computer_generated==3)
        {
            printf("       👑👑👑👑👑👑👑👑👑👑👑\n");
            printf("       /\\     /\\     /\\     /\\\n");
            printf("      {  }   {  }   {  }   {  }\n");
            printf("       ||     ||     ||     ||\n");
            printf("    ===========================\n");
            printf("        |      YOU WIN     |\n");
            printf("    ===========================\n");
            break;

        }
        else if ((strcmp(user_choice,"Water")==0) && computer_generated==2)
        {
           printf("Its a tie");
        }
        else if ((strcmp(user_choice,"Snake")==0) && computer_generated==1)
        {
           printf("Its a tie");
        }
        else if ((strcmp(user_choice,"Gun")==0) && computer_generated==3)
        {
           printf("Its a tie");
        }
        
        else{
            printf("     👑👑👑👑👑👑👑👑👑👑👑\n");
            printf("       /\\     /\\     /\\     /\\\n");
            printf("      {  }   {  }   {  }   {  }\n");
            printf("       ||     ||     ||     ||\n");
            printf("    ===========================\n");
            printf("        |   COMPUTER WIN |\n");
            printf("    ===========================\n");
            break;
        }
        
 
    }
    
    return 0;
}