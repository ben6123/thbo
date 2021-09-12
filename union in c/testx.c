#include <stdio.h>
#include <stdlib.h>

int main()
{ union{
    int i;
    double u;
    }u;
    //two declaration cant be declared cuz union takes the highest structure
    //as overall while struct does not 
    printf("enter i\n");
    scanf("%d" ,&u.i);
    //printf("enter u\n");
    //scanf("%f" ,&u.u);
    printf("%d\n", u.i);
    //printf("%f\n", u.u);
    return 0;
}