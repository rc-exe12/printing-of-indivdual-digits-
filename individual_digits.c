// count digits in a number.
#include<stdio.h>
int ind_n(int);
int c=0;
int main(){
    int n,x;
    printf("enter a number:");
    scanf("%d",&n);
    x=ind_n(n);
    printf("Number of digits in %d is %d\n",n,x);
}
int ind_n(int n){
    if(n==0)
        return ;
    else
    c++ ;
        return ind_n(n/10);
        
}

