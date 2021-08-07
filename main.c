#include <stdio.h>
#include <stdlib.h>

int sum(int a,int b,int c){return a+b+c;
}
int sum1(int a,int b,int c ,int d ,int e,int f){
     int i,j;
     i=sum(a,b,c);
     j=sum(d,e,f);
     return i+j;}


   int main()
{    int add,a,b,c;
    printf ("input 3 variables");
    scanf("%d %d %d",&a,&b,&c);
    add =sum(a,b,c);
    printf("the new sum is: %d", add);
    return 0;
 }
