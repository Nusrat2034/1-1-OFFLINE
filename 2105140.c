
#include <stdio.h>
int main()
{
    int m,n,f,g,max;
    int a[30][30];
    printf("Enter the  value of m and n:");
    scanf("%d%d",&m,&n);
    printf("Enter the value of f and g:\n");
    scanf("%d%d",&f,&g);
    if(m>=f && n>=g){
    printf("Take input in matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Input matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("answer matrix:\n");
    for (int i = 0; i < m-f+1; i++)
    {
        for (int j = 0; j < n-g+1; j++)
        {
            max=a[i][j];
            for (int x = i; x <i+f; x++)
            {
                for (int y = j; y <j+g; y++)
                {
                if(a[x][y]>max){
                    max=a[x][y];
                }
                }

            }

            printf("%d ",max);

        }
        printf("\n");
    }
}
else printf("Invalid input\n");

    return 0;
}
