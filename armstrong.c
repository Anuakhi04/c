#include <stdio.h>

int main() {
    int n,num;
    printf("enter a number");
    scanf("%d",&num);
    n=num;
    int r ,result=0;
    while (n!=0){
        r=n%10;
        result=result+(r*r*r);
        n=n/10;
    }
if(result==num){
    printf("it is an armstrong number");
}
else{
    printf("it is not an armstrong number");
}
    return 0;
}