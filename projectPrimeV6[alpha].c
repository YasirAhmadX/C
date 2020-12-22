#include<stdio.h>
int main()
{
    long int x,n,i,y;
    
    system("title PRiMES");
    system("color 0a");
    system("start x.vbs");
    printf("\nEnter a no.to check >  ");
    scanf("%ld",&x);

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
            printf("\nIts not a prime and is divisible by %ld",i);
            system("start xNonPrime.vbs");

            n=0;
        }
    }
    if(n!=0)
    {
        printf("\nIts a prime");
        system("start xPrime.vbs");
    }
    getch();
}
