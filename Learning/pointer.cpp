#include <stdio.h>

int main() {
    const int Size = 5;
    int grades[Size] = {78, 67, 92, 83, 88};
    double sum = 0.0;
    double *ptr_to_sum = &sum;
    int i;

    printf("\nMy grades are:\n");

    for (i = 0; i < Size; i++) {
        printf("%d\t", grades[i]);
    }

    printf("\n\n");

    for (i = 0; i < Size; i++) {
        sum += grades[i];
    }

    printf("My average is %.2f\n", sum / Size);
    printf("\n\n");
    printf("Sum is at %p, or %lu and is %lf \n",
          (void*)ptr_to_sum, (unsigned long)ptr_to_sum, *ptr_to_sum);

    printf("Grades are at %p to %p\n", (void*)grades, (void*)(&grades[Size-1]));

    return 0;
}