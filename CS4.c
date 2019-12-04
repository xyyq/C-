#include <stdio.h>
#include <conio.h>
void main()
{
	int i=0,j,k,s,t=0;
	char c;
	while(i==0)
	{
		c=getch();
		
		if(c==27)
			break;
		if(c==13)
			continue;
		putch(c);
	}
	

}
