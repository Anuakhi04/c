#include <stdio.h>
#define max 50;
int a[50],x,i,val,n,p;
void create();
void display();
void insert();
void delete();
void main(){
create();
display();
insert();
printf("after insertion");
display();
delete();
printf("after deletion");
display();
}
void create(){
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void display(){
    printf("the elements in array :\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
void insert(){
    printf("enter the position to insert");
    scanf("%d",&p);
     printf("enter the new value");
    scanf("%d",&val);
    n=n+1;
    for(int i=n;i>p;i--){
        a[i]=a[i-1];
        
    }
    a[p-1]=val;
}
void delete (){
    printf("enter the position to delete:");
    scanf("%d",&p);
    n=n-1;
    for(i=p-1;i<n;i++){
        
    }
    a[i]=a[i+1];
}
