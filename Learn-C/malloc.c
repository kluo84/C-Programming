#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int a;
    int b;

}point;

void main () {
    /*This is the pointer of mypoint by using malloc function*/
    point * mypoint = malloc(sizeof(point));


    mypoint->a=5;
    mypoint->b=15;

    printf("mypoint value is %d %d\n", mypoint->a, mypoint->b);
    free(mypoint);
}
