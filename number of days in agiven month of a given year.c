#include<stdio.h>
void dayinmonth(int,int);
int main()
{
    int year,month;
    printf("enter the year\n");
    scanf("%d",&year);
    printf("enter the month\n");
    scanf("%d",&month);
    switch (month){
   case 1:
       printf("days in jan is 31");
        break;
   case 2:
      if(year%4==0)
        {
        printf("days in feb is 29");
        }
    else
        {
         printf("days in feb is 28");
        }
    break;
   case 3:
        printf("days in mar is 31");
        break;
   case 4:
        printf("days in apr is 30");
        break;
   case 5:
        printf("days in may is 31");
        break;
    case 6:
        printf("days in jun is 30");
        break;
    case 7:
        printf("days in jul is 31");
        break;
    case 8:
        printf("days in augest is 31");
        break;
    case 9:
        printf("days in sep is 30");
        break;
    case 10:
        printf("days in may is 31");
        break;
    case 11:
        printf("days in may is 30");
        break;
    case 12:
        printf("days in may is 31");
        break;
    default:
        printf("NOT VALID");
        break;
    }
}
