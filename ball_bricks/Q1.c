

#include <stdio.h>

int main()
{
    int n=7,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || j==0 || j==n-1)
                printf(" W");
            else if(i==n-1 && (j==1 ||j==2 || j==4 || j==5))
                printf(" G");
            else if(i==n-1 && j==3)
                printf(" o");
            else if((i==2 && (j==2 || j==3 || j==4)) || (i==3 && (j==2 || j==3 || j==4)))
                printf(" 1");
            else 
                printf("  ");
        }
        printf("\n");
    }
    printf("Ball count is 3");


    return 0;
}