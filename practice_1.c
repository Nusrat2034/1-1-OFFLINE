#include<stdio.h>
int main()
{
    int n;
    double sum=0.0,fact=1.0,t=0.0;
    printf("Enter the term number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
        t=t*10+1;
        sum=sum+(fact/t);
    }
    printf("The summation is = %lf\n",sum);
    return 0;
}
