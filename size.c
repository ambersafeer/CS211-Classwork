#include <stdio.h>

int main(int argc, char** argv){

    int a[5] = {0, 1, 3, 7, 9};
    printf("%d\n", a[2]);
    printf("%d\n", *(a+2));
    
    // this is called pointer arithmetic
    // can use this to move to different locations
    
    int *pa = a;

    printf("%d\n", sizeof(a)); // size of array
    printf("%d\n", sizeof(pa)); // size of pointer
    
    void *va = a;
    printf("%p\n", va); //prints memory address
    printf("%p\n", va+1); //increases by one byte

    

}