#include <stdio.h>

int main() {
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    char grade = (mark >= 90) ? 'A' :
                        (mark >= 70) ? 'B' :
                        (mark >= 35) ? 'C' :
                                       'F';

    printf("Your grade is: %c.", grade);

    switch(grade){
        case 'A':
            printf(" Excellent work!");
            break;
        case 'B':
            printf(" well done!");
            break;
        case 'C':
            printf(" Good job!");
            break;
        case 'F':
            printf(" Sorry, you failed.");
            break;
        default:
            printf(" invalid grade.");
        
    }

    if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'E') {
        printf(" you are eligible for the next level.");
    }
    else{
        printf("Please try again next time");
    }
}