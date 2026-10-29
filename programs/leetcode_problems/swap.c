#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);

    a=a^b;
    b=a^b;
    a=a^b;

    printf("After swapping a=%d and b=%d",a,b);

}