#include <stdio.h>

long fibonacci(int n) {
    if (n <= 1) return n;

    long f1 = 0, f2 = 1, f_temp;
    for (int i = 2; i <= n; i++) {
        f_temp = f1 + f2;
        f1 = f2;
        f2 = f_temp;
    }
    return f2;
}

long recursive_fibonacci(int n) {
    if (n <= 1) 
        return n;
    else 
        return recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
}

int main(void) {
    int how_many = 0;
    printf("I want a table of Fibonacci up to n: ");
    scanf("%d", &how_many);
    printf("\nFibonacci\n");

    for (int i = 0; i <= how_many; i++)
        printf("\n%d\t%ld\t%ld\n", i, fibonacci(i), recursive_fibonacci(i));

    return 0;
}
