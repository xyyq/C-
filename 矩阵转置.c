#include<stdio.h>
void main()
{
	int i,j;
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2];
	for(i=0;i<2;i++)
		{for(j=0;j<3;j++)
			b[j][i]=a[i][j];
		}

			printf("%s",b);
 } 
