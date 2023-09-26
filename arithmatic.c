#include<stdio.h>

int main(){
    int x=10;
    // scanf("%d", &x);
    //ampersand is a mechanism to tell the compiler the address
    int num;

    while (1) {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &num);
        if (num == 0){
            break;
        } else{
          printf("%d\n", x/num);  
        }
        
    }
       
    return 0;
}

// for (int i =1; i <=5; i++){
//     if (i==3)
//         continue; //skip iteration 3
//    printf("Iteration %d\n", i);