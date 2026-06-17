#include<stdio.h>

int main(){
    int i;
    int num = 11;
    for(i=1; i<=5; i++){
        for(int k=1; k <= i; k++){
            printf("%d ",num);
            num ++;
        }
        printf("\n");
    }
}