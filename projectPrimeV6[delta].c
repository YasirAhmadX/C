//LoneWolf_X
#include<stdio.h>
int main()
{
    system("title PRIMES");
    system("color 0a");
    system("start x.vbs");
    PRiME();
    return 0;
	
}

int PRiME()
{
   unsigned long long int x,n,i,y;
    
    printf("\n\n\n\n\t\t\t\t\tEnter a no.to check >\f ");
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
    system("start xRecalculator[delta].vbs");
    printf("\n\n\n\nPress 1 to recalculate    ");
    scanf("%llu",&i);
    
    if(i==1)
    {
    	PRiME();
    }
    else
    { 
     system("start xBye[delta].vbs");
	 return 0;
	}
}
