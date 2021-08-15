#include <stdio.h>
#include <stdlib.h>

int main()
{ union{
    int i;
    double u;
    }u;
    printf("enter i\n");
    scanf("%d" ,&u.i);
    //printf("enter u\n");
    //scanf("%f" ,&u.u);
    printf("%d\n", u.i);
    //printf("%f\n", u.u);
    return 0;
}
