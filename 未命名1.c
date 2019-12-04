#include <stdio.h>
void main()
{
	int a,b,p,q,c,d;
	a=4,b=4,c=4,d=4;
	c=c++;
	d=++d;
	p=(b++,b+a);
	q=(++b)+(++b);
	printf("%d\n%d\n%d\n%d\n%d\n%d",p,q,a,b,c,d);
}
