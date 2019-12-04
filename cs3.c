#include <stdio.h>
void main()
{
	int i,j,k,s,t=0;
	for(i=1;i<6;i++)
	{
		for(j=1;j<6;j++)
			{
				for(k=1;k<6;k++)
				{
					if(i!=j&&i!=k&&j!=k)
					{
						s=100*i+10*j+k;
						t=t+1;
						printf("%d\n",s);
					}
					
				}
			}
		
	}
	printf("满足条件的数共有：%d",t);
}
