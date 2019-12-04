#include <stdio.h> 
void main()
{
	int a,b,s,t;
	scanf("%d %d",&a,&b);
	s=1,t=1;
	if(a>10) s=s+1;
	if(a>b) t=t+s;
	else if(a==b) t=5;
	else t=2*s ;
	printf("%d,%d",s,t);
}
