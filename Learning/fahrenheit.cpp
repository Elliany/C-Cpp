#include <stdio.h>

int main(){
    int Fahrenheit, Celsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &Fahrenheit);
    Celsius = (Fahrenheit - 32) * 5 / 9;
    printf("The temperature in Celsius is: %d\n", Celsius);
    return 0; 
}