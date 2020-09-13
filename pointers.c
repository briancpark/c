#include <stdio.h>

int main() {
    int var = 10;

    int *ptr = &var;
    *ptr = 20;

    var = 15;

    //int x = 2314;

    //int *ptr2 = x;

    int *x;
    x = malloc(sizeof(int));
    *x = 42;
  
    int *lec_ptr;
    *lec_ptr = 5;  //naive mistake that was pointed out in lecture
    
  
}
