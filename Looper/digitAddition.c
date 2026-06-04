#include<stdio.h>

int main(){
    int num, first, last;
    printf("Enter a digit:");
    scanf("%d", &num);

    last = num % 10;
    while(num >=10){
        num = num / 10;
        first = num;
    }
    printf("first digit is: %d",first);
    printf("\nlast digit is: %d", last);
    int add = first + last ;
    printf("\nAdd is: %d", add);
}