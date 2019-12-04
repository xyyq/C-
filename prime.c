#include <stdio.h>
#include <math.h>
void main()


{
	int i,n,a,b,s;
	scanf("%d",&n);
 	for(i=2;i<n;i++)
 	{
 		if(n%i==0)
 		{
 			printf("%d is not prime",n);
			 break;
		 }

	 }
	 if(i>=n)
	 printf("%d is  prime",n);

	
	
		
}

		
	
	
	
