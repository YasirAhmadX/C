#include<stdio.h>
int main()
{
    long int x,n,i,y,itr=0;
    
    system("title PRiMES");
    system("color 0a");
    system("start x.vbs");
    printf("\n\t\t\t\t\tEnter a no.to check >\f ");
    scanf("%ld",&x);

    n=(x/2)+1;
    //int itr=0;

    for(i=2;i<n;i++)
    {	
		itr++;
		
        if(i>3)
        {
            i++;
        }
        y=x%i;

        if(y==0)
        {
            printf("\n\a\t\t\t\t\tIts not a prime and is divisible by %ld",i);
            system("start xNonPrime.vbs");

            n=0;
        }
    }
    if(n!=0)
    {
        printf("\n\a\t\t\t\t\t\tIts a prime");
        system("start xPrime.vbs");
    }
    printf("\n\a\t\t\t\t\t\tNo. of iterations:%ld", itr);
    getch();
}
