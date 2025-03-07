#include <stdio.h>
#include <math.h>

int main(){
float scores[4],sum=0,average;

printf("Enter marks for three subjects\n");
 for(int i=0;i<3;i++){
    scanf("%f",&scores[i]);
    sum +=scores[i];
 }
 average=sum/3;
 printf("the average marks are %.2f/n",average);

}
