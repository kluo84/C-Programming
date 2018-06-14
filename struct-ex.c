#include <stdio.h>

typedef struct {

    char * name;
    int age;
}person;

void main () {

    person john;
    
    john.name = "John";
    john.age = 27;

    printf ("Name and age of John are: %s %d", john.name, john.age);


}
