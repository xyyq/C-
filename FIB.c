#include <stdio.h>
#include<math.h>
int f(int i)
{
	if(i==1)
		return(1);
	else if(i==2)
		return(1);
	else 
		return(f(i-1)+f(i-2));
}
void main()

{
	while(1)
	{
	int t;
	scanf("%d",&t);
	
	printf("%d\n",f(t));
	}
}
