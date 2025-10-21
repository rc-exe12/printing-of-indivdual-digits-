#include<stdio.h>
int main(){
 int n;
 printf("Enter the number of terms(n):\n");
 scanf("%d",&n);
 while(n>0){
    printf("The digits are:%d\n",n%10);
    n=n/10;
 }
 
}