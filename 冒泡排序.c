#include <stdio.h>
void main()
{
	int b,c,x,y,i,j,t,max;
	//a=3,b=4,c=5;
	//scanf("%d",&x)
	//x=!b<a&&b!=c;
	//y=!b<a&&b!=c;
	int	a[9];
	for(i=0;i<9;i++)
	scanf("%d",&a[i]);	
	
	for(j=8;j>0;j--)
	{
		for(i=0;i<j;i++)
		{
		if(a[i]>a[i+1])
		{t=a[i+1],a[i+1]=a[i],a[i]=t;}
		}
	}
	for(i=0;i<9;i++)
	{if(i>0&&i%3==0)
	{printf("\n");}
	printf("%-3d",a[i]);	
} 
}
