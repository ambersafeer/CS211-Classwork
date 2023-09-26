#include <stdio.h>
#include <stdint.h>

//program that takes in two numbers from cmd line
//compute a^b

int main(int argc, char *argv[]){
    
    int result = 1;
    for (int i = 0; i < atoi(argv[2]); i++){
        result *= atoi(argv[1]);
    }
    printf("%d", result);
    return 0;
}