#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, sum;
    
    srand(time(NULL));
    
    num1 = rand() % 6 + 1;
    num2 = rand() % 6 + 1;
    
    sum = num1 + num2;

    printf("Rolling dice...\n");
    printf("Die 1: %d\n", num1);
    printf("Die 2: %d\n", num2);
    printf("Total value: %d\n", sum);
    
    return 0;
}
