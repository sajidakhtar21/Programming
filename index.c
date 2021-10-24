#include<stdio.h>
int main()
{
    int sum=0,n,i;
    printf("Enter the No of Values :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=i+sum;
    }
    printf("%d",sum);
}