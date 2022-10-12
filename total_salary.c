#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the number of employees:");
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
    {
        printf("enter salary at s[%d]:",i);
        scanf("%d",&s[i]);
        sum=sum+s[i];
    }
    printf("\n total salary = %d lacs",sum);
}
