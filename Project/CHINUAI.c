#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

void to_lower(char *);
void remove_spces(char *s);

void to_lower(char *s)
{

    while (*s != '\0')
    {
        *s = tolower(*s);
        s++;
    }
}

void remove_spces(char *s)
{
    char *read = s;
    char *write = s;

    while (*read != '\0')
    {
        if (*read != ' ')
        {
            *write = *read;
            write++;
        }
        read++;
    }
    *write = '\0';
}

int main()
{


    char name[1000];
    char work[1000];
    char city[1000];
    char city_weather[1000];
    char games[1000];
    char apps[1000];
    time_t current_time;
    struct tm *time_info;
    char str_time[100];
    time(&current_time);
    time_info = localtime(&current_time);
    strftime(str_time, sizeof(str_time), "%H:%M:%S", time_info);
    // To Print Time Use str_time

    printf("Hello There !! \n");
    printf("Welcome to our AI !\n");
    printf("------------------------------------\n");
    printf("Enter Your Name : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    FILE *ptr;
    ptr = fopen("User_info.txt", "a");
    fprintf(ptr, "Time : %s \nName : %s\n", str_time, name);
    fclose(ptr);
    while (1)
    {
        printf("------------------------------------\n");
        printf("What I can help you with today %s? \n",name);
        printf("");
        printf("Tasks I can do : \n\t1.Open Apps\n\t2.Play Games\n\t3.Check Weather\n ----> ");
        fgets(work, sizeof(work), stdin);
        work[strcspn(work, "\n")] = '\0';
        FILE *ptr1;
        to_lower(work);     // To lower the command
        remove_spces(work); // To remove spaces

        if (strstr(work, "exit") != NULL || strstr(work,"end")!= NULL || strstr(work,"byebye")!= NULL || strstr(work,"byee") || strstr(work,"sayonara")!= NULL)
        {
            printf("Thanks For Using Me :-)\n");
            break;
        }
        if (strstr(work,"openapps")!=NULL || strstr(work,"openapp")!=NULL || strstr(work,"apps")!=NULL || strstr(work,"1")!=NULL || strstr(work,"1.")!=NULL)
        {
            printf("Which App you want to open ?\n\t1.Open Youtube\n\t2.Open Instagram\n\t3.Open Facebook\n\t4.Open Github\n\t5.Open Linkedin\n\t6.Open Leetcode.\n ----> ");
            fgets(apps,sizeof(apps),stdin);
            remove_spces(apps);
            to_lower(apps);
            if (strstr(apps, "openyoutube") != NULL || strstr(apps, "youtube") != NULL || strstr(apps,"1") != NULL || strstr(apps, "ytb") != NULL)
            {
                system("open https://www.youtube.com");
            }
            else if (strstr(apps, "openinstagram") != NULL || strstr(apps, "insta") != NULL || strstr(apps, "instagram") != NULL  || strstr(apps,"2") != NULL) 
            {
                system("open https://www.instagram.com");
            }
            else if (strstr(apps, "openfacebook") != NULL || strstr(apps, "facebook") != NULL || strstr(apps,"3") != NULL)
            {
                system("open https://www.facebook.com");
            }
            else if (strstr(apps, "opengihtub") != NULL ||  strstr(apps, "github") != NULL || strstr(apps,"4") != NULL)
            {
                system("open https://www.Github.com");
            }
            else if (strstr(apps, "openlinkedin") != NULL || strstr(apps, "linkedin") != NULL || strstr(apps,"5") != NULL)
            {
                system("open https://www.linkedin.com");
            }
            else if (strstr(apps, "openleetcode") != NULL || strstr(apps, "leetcode") != NULL || strstr(apps,"6") != NULL)
            {
                system("open https://www.leetcode.com");
            }
        }
        
        if (strstr(work,"weather")!= NULL || strstr(work,"checkweathers")!= NULL || strstr(work,"checkweather")!= NULL || strstr(work,"3")!= NULL || strstr(work,"3.")!= NULL || strstr(work,"weathers")!= NULL)
        {
            printf("Enter the city : ");
            fgets(city,sizeof(city),stdin);
            sprintf(city_weather,"open http://wttr.in/%s",city);
            system(city_weather);
        }
        if (strstr(work,"games")!= NULL || strstr(work,"game") || strstr(work,"2") || strstr(work,"playgame") || strstr(work,"playgames") || strstr(work,"play") || strstr(work,"2.")){
            printf("Which game you want to play ?\n\t1.Chess\n\t2.Typing Game\n\t3.Doodle Cricket\n\t4.Pacman\n\t---->");
            fgets(games,sizeof(games),stdin);
            remove_spces(games);
            to_lower(games);
            if(strstr(games,"chess")!=NULL || strstr(games,"playchess")!=NULL ||  strstr(games,"ches")!=NULL || strstr(games,"openchess")!=NULL || strstr(games,"openches")!=NULL || strstr(games,"openchss")!=NULL){
                system("open https://www.chess.com");
            }
            if(strstr(games,"typinggame")!=NULL || strstr(games,"typinggames")!=NULL || strstr(games,"typing")!=NULL || strstr(games,"2")!=NULL || strstr(games,"2.")!=NULL || strstr(games,"typing")!=NULL){
                system("open https://zty.pe");
            }
            if(strstr(games,"doodlecricket")!=NULL || strstr(games,"doodle")!=NULL || strstr(games,"cricket")!=NULL || strstr(games,"crkt")!=NULL || strstr(games,"dodlecricket")!=NULL || strstr(games,"dodlecrkt")!=NULL || strstr(games,"3")!=NULL || strstr(games,"3.")!=NULL){
                system("open https://www.doodlescricket.com/");
            }
            if(strstr(games,"pacman")!=NULL || strstr(games,"pcmn")!=NULL || strstr(games,"pcman")!=NULL || strstr(games,"pacmn")!=NULL || strstr(games,"4")!=NULL || strstr(games,"4.")!=NULL || strstr(games,"IV")!=NULL ){
                system("open https://www.crazygames.com/game/pacman");
            }

        }


        ptr1 = fopen("User_query.txt", "a");
        fprintf(ptr1, "Time : %s\n Query : %s\n", str_time, work);
        fclose(ptr1);
    }

    return 0;
}