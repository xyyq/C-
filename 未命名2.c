#include <stdio.h>
main()
{
	int i;
	for(i=1;i<=5;i++)
	switch(i%5)
	{
	case 0:printf("*");break;
	case 1:printf("#");break;
	default:printf("\n");
	case 2:printf("&");
	}
}
	
