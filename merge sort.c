#include <stdio.h>
#include <stdlib.h>
//#define n (size of array)
//int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int a[];
int b[];
void collect(int a[], int n){
    int j;
 for(j=0;j<=n;j++){
    printf("enter elements of the array\n");
    scanf("%d" ,&a[j]);
 }
}
void merging(int low, int mid, int high) {
int l1, l2, i;
for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
if(a[l1] <= a[l2])
b[i] = a[l1++];
else
b[i] = a[l2++];
}
while(l1 <= mid)
b[i++] = a[l1++];
while(l2 <= high)
b[i++] = a[l2++];
for(i = low; i <= high; i++)
a[i] = b[i];
}
void sort(int low, int high) {
int mid;
if(low < high) {
mid = (low + high) / 2;
sort(low, mid);
sort(mid+1, high);
merging(low, mid, high);
} else {
return;
}
}
int main(){
int k, n;
printf("enter the size of the array\n");
scanf("%d" ,&n);
int a[n];
collect(a, n-1);
printf("List before sorting\n");
for(k = 0; k <= n; k++)
printf("%d ", a[k]);
sort(0, n);
printf("\nList after sorting\n");
for(k = 0; k <= n; k++){
printf("%d ", a[k]);}
}
