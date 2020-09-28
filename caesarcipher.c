#include <stdio.h>
 
void main()
{ char msg[10];
char emsg[10];
int length=0;
	printf("Enter your Message below!");
	scanf("%s",&msg);
	printf("\nMessage: %s",msg);
	
for(int l=0;l<10;l++){
	if(msg[l]!='\0'){
		length++;
		}
	}
	
	length-=2;

	for(int i=0;i<length;i++)
	{
		
		emsg[i]=msg[i]+3;
		}
	printf("\nEncoded Message: %s", emsg);
	
	
}
 
