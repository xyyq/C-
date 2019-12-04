#include <stdio.h>
#include <math.h>
void main()


{
	int i,n,a,b,s;
	for(n=101;n<=200;n=n+2)
	
	{	
		s=sqrt(n);	
	 	for(i=2;i<s;i++)
	 	{
	 		if(n%i==0)
	 		{break;} 
		}
		if(i>=s){printf("%d\n",n);}
	 
	}
	
	
		
}

		
	
	
	
