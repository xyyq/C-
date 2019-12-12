#include <stdio.h>
hanoi(int i,char x,char y,char z)
 {
 	
 	if(i==1)
 	{
	 printf("%c->%c",x,z);
	}
	else
	{
		hanoi(i-1,x,z,y);
		printf("%c->%c",x,z);
		hanoi(i-1,y,x,z);	
	}
 }
void main()
{
	int a;
	char X,Y,Z;
	
	scanf("%d",a);
	hanoi(a,X,Y,Z);
 } 
 

