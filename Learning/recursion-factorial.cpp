#include <stdio.h>

long int factorial(int n) {
    if (n < 0) return -1; // Factorial not defined for negative numbers
    if (n == 0) return 1; // 0! is 1

    long int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}

long int recursive_factorial(int n) {
    if (n < 0) return -1; // Factorial not defined for negative numbers
    if (n == 0) return 1; // 0! is 1

    return n * recursive_factorial(n - 1);
}

int main() {
    int how_many = 0;
    printf("How many numbers do you want to factorial? ");
    scanf("%d", &how_many);

    if (how_many < 0) {
        printf("Negative number entered. Exiting program.\n");
        return 1; // Exit with error code for negative number
    }

    printf("\nIterative Factorial\n");
    for (int i = 0; i <= how_many; i++) {
        long int result = factorial(i);
        if (result != -1)
            printf("\n%d \t %ld\n", i, result);
        else
            printf("\n%d \t Undefined (Negative Number)\n", i);
    }
    printf("\n\n");

    printf("Recursive Factorial\n");
    for (int i = 0; i <= how_many; i++) {
        long int result = recursive_factorial(i);
        if (result != -1)
            printf("\n%d \t %ld\n", i, result);
        else
            printf("\n%d \t Undefined (Negative Number)\n", i);
    }
    printf("\n\n");
    return 0;
}
