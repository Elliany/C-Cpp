#include <stdio.h>

double average_grades(int how_many, int grade[]) {
    double sum = 0.0;
    for (int i = 0; i < how_many; i++)
        sum += grade[i];
    return (sum / how_many);
}

void print_grades(int how_many, int grade[]) { 
    printf("I have %d grades\n", how_many);
    for (int i = 0; i < how_many; i++)
        printf(" %d\t ", grade[i]);
}

int main(void) {
    const int SIZE = 5;
    int grades[SIZE] = {78, 67, 92, 83, 88};
    print_grades(SIZE, grades);
    printf("\n\n");
    printf("My average is %.2f\n", average_grades(SIZE, grades));
    return 0;
}
