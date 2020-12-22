#include<stdio.h>
int main()
{
   unsigned long long int x,n,i,y;
    
    system("title PRiMES");
    system("color 0a");
    system("start x.vbs");
    printf("\n\t\t\t\t\tEnter a no.to check >\f ");
    scanf("%llu",&x);

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
            printf("\n\a\t\t\t\t\tIts not a prime and is divisible by %llu",i);
            system("start xNonPrime.vbs");

            n=0;
        }
    }
    if(n!=0)
    {
        printf("\n\a\t\t\t\t\t\tIts a prime");
        system("start xPrime.vbs");
    }
    getch();
}
