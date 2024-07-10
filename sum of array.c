#include <stdio.h>
#define MAX 50
void main(){
    int n,i,j,k,a[MAX],target,s,flag=0;
    printf("enter the limit : ");
    scanf("%d",&n);
    printf("enter the numbers : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the target :");
    scanf("%d",&target);
    s=a[0];j=0;
    for(i=1;i<n;i++){
        for(k=i;k<n;k++)
        {
            s=temp+a[k];
            if(s==target)
            {
                flag=1;break;
            }
        }
        if(flag==1)
        break;
        else{
            s=a[i];
            j=i;
        }
    }
    if(flag==0)
    printf("number sum not match with target");
    else
    printf("index:%d,%d",j,k);
}