#include<stdio.h>
int main(){
    int speed;
    printf("Enter the speed of the car:");
    scanf("%d",&speed);
    speed = (speed <= 65)? (65) : (speed <= 70) ? (70): (90);
    switch (speed){
        case 65: printf("\nNo seeding ticket \n\n"); break;
        case 70: printf("\nSeeding 1 ticket \n\n"); break;
        case 90: printf("\nSeeding 2 ticket \n\n"); break;
        default: printf("\nInvalid speed \n\n"); break;
    }
    return 0;
}