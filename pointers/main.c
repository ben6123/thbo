#include <stdio.h>
#include <stdlib.h>
int main( ){
int *p,i;
    i=5;
    printf("%d\n", i);
    p=&i;
    *p=10;
    printf("%d", i);
    printf("%d", 5);
    return 0;
}

