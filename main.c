#include <stdio.h>
void main()
{
	int a[6],b,c,x,y,i,j,max;
	//a=3,b=4,c=5;
	//scanf("%d",&x)
	//x=!b<a&&b!=c;
	//y=!b<a&&b!=c;
	printf("ÊäÈë6¸öÊý£º\n");	
	for(i=0;i<=6;i++)
	{scanf("%d",&a[i]);}
	max=a[0];
	for(i=0;i<=6;i++)
	{
	if(a[i]>max) max=a[i];
	}
	printf("%d",max);
	
	
} 
