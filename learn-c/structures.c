#include <stdio.h>

/* define the person struct here using the typedef syntax
Define a new data structure, 
named "person", which contains a 
string (pointer to char) called name, 
and an integer called age.

 */
typedef struct{ 
char * name;
int age;
} person;

int main() {
    person john;

    /* testing code */
    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.", john.name, john.age);
}