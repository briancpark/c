#include <stdio.h>

int main() {
    int var = 10;

    int *ptr = &var;
    *ptr = 20;

    var = 15;

    int x = 2314;

    int *ptr2 = x;

}
