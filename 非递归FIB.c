#include <stdio.h>
void main()

{
	int i=3,n,a,b,s;
	scanf("%d",&n);
	if(n==1||n==2)
		printf("1");
	else	
	{
		printf("1\n1\n");
		for(a=1,b=1;i<=n;)	
		{
		i++,s=a+b,a=b,b=s;	
		
		printf("%d\n",s);
		}
	}
}
