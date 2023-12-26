#include<stdio.h>
int main(){
    int outside, weather;
    printf("\n Enter if outside 1 true 0 false:\n");
    scanf("%d", &outside);
    printf("\n Enter if rain 1 true 0 false:\n");
    scanf("%d", &weather);
    if(outside && weather)
        printf("\nPlease use an umbrella.\n");
    else 
        printf("\nDress normally\n");
    return 0;
}