#include <stdio.h>
#include<string.h>

int main() {
    int digits, count = 0;
    printf("enter a digits:");
    scanf("%d",&digits);

    do{
        count++;
        digits /= 10;
    }while(digits != 0);
    printf("total digit is: %d",count);
}