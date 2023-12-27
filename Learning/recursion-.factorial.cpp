#include <stdio.h>

long int factorial(int n) {
    long f = 1;
    int i;
    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

long int recursive_factorial(int n) {
    if (n == 1)
        return 1;
    else 
        return n * recursive_factorial(n - 1);
}

int main() {
    int how_many = 0, i;
    printf("How many numbers do you want to factorial? ");
    scanf("%d", &how_many);
    printf("\nFactorial\n");
    for (i = 1; i <= how_many; i++)
        printf("\n%d \t %ld\n", i, factorial(i));
    printf("\n\n");
    return 0;
}
