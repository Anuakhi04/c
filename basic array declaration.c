#include <stdio.h>

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
int length=sizeof(arr)/(sizeof(arr[0]));

printf("elements of given array\n");

    for(int i=0;i <length; i++){
        
    printf("%d ", arr[i]);
    
    }

    return 0;
}