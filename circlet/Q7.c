#include<stdio.h>

int main(){
    for(int i = 1; i <= 5; i++)
    {
       if(i == 1 || i==3)
       {
        for(int j = 1; j <= 5; j++)
        {
            printf("* ");
        }
    }
        else if(i==2)
        {
            printf("*       *");
        }
       else
       {
            printf("*");
       }
        printf("\n");
       }
    } 
