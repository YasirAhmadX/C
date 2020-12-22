#include<stdio.h>
int main()
{
    int x,n,i,y;
    printf("Enter a no.to check >  ");
    scanf("%d",&x);
    n=(x/2)+1;

    for(i=2;i<n;i++)
    {
        if(i>3)
        {
            i++;
        }
        y=x%i;

        if(y==0)
        {
            printf("\nIts not a prime");

            i=+n;
        }
    }
    if(i==n)
    {
        printf("\nits a prime");
    }
    return 0;
}
