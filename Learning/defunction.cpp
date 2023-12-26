#include<stdio.h>
int main(){
    int repeat = 0;
    printf("Enter the number of times to repeat 1-10: ");
    scanf("%d",&repeat);
    printf("\nYou will repeat");
    while (repeat > 0)
    {
        printf(" very");
        repeat--;
    };
    printf(" much");
    return 0 ;
    
}