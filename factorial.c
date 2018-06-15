#include <stdio.h>

int factorial(int i) {

    int f = i;
    if (i > 1) {
        f *= factorial(i-1);
    }
    return f;
}

int main() {
    /* testing code */
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
}

/* define your function here (don't forget to declare it) */
