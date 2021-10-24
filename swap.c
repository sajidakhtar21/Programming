#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first vaalue\n");
    scanf("%d",&a);
    printf("Enter the Second Value\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swaped Value :\n%d\n%d",a,b);
}