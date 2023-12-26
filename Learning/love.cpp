#include <stdio.h>
int main(){
    int repeat = 0;
    printf(" How strong is your love 1 - 10:");
    scanf("%d", &repeat);
    printf("\nI love you times");
while (repeat > 0) {
    printf("\nI love you");
    repeat--;
}
printf("\nvery much.\n\n");
return 0;
};