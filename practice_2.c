#include<stdio.h>
int main()
{
    long long int s,i,m,l,r;
    printf("Kaprekar number from 1 to 1000000:");
    for(i=1; i<=1000000; i++)
    {
        if(i==1)printf("%lld ",i);
        else
        {
            s=i*i;
            for(m=10; m<s; m=m*10)
            {
                l=s%m;
                r=s/m;
                if((l+r)==i && l!=0)
                    printf("%lld ",i);
            }
        }
    }
    return 0;
}

