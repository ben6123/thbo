#include <stdio.h>
#include <stdlib.h>


int main(){
  int i;
  int sum=0;
  int average;
  int x[100];
  int y[100];
  int size;

      //Get size input from users
    printf("Enter Number of Subjects Written: \n");
    scanf("%d",&size);

    printf("Enter marks on 20:\n");
    for(i = 0; i < size; i++){
          scanf("%d",&x[i]);
        }
    printf("Enter coefficient of Subjects:\n");
    scanf("%d" ,&y[10]);

   //add all elements to the variable sum.
    for(i = 0; i < size; i++)
          sum = sum + x[i]; // same as sum += arr[i];
    printf("Total marks is = %d\n",sum);

    average= sum/size;
    printf("Average =%d\n",average);
    if (average<=6){
        printf("Remark :Very poor");
    }
    else if(average>6 && average<=9){
        printf("Remark :Poor")
    ;}
    else if(average>9 && average<10){
        printf("Remark :Below average")
    ;}
    else if(average==10){
        printf("Remark :Average")
    ;}
    else
    {
        printf("Remark :Good");
    }


    return 0;
    }
    /*1.	A class of n students take an annual examination in m subjects. Two of such subjects are
coefficient 4 subjects and the rest are coefficient 2.Mathematics and English are the two coefficient
4 subjects and they are compulsory. Each student must offer between 4 and 10 subjects.Write a c program
 that permits the user to
i.	To enter the number of subjects written, marks on twenty and the coefficient of each of the subjects written.
ii.	The program will print out the total marks of the student, his average and
    his remark (0<=average<=6: very poor, 6<average<=9: poor, 9<average<10: Bellow average, average=10:
    average, average >10 :good ).
*/


