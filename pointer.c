#include <stdio.h>

void addone ( int *n) {
    ++(*n);
}

void main () {

    int n;
    printf ("Before: %d\n", n);
    addone(&n);
    printf ("After: %d\n", n);
} 
