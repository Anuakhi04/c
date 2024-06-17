#include <stdio.h>
int main(){
    int num;
    printf("Enter a number to check odd or even");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("number is even");
    }
    else{
       printf("number is odd");
    }
    return 0;
}