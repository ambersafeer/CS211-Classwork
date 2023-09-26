#include <stdio.h>

int main(int argc, char** argv){
    int a = 5;
    // The & operator is the "reference" operator.
    // This makes a_pointer store the location of a.
    int* a_pointer = &a;
    printf("The value of a_pointer is %p\n", a_pointer);
}