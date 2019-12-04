#include <stdio.h>
void main()
{
	char c;
	int a=1,b,j,num[10]={0};
	c=getchar();
if(c>='0'&&c<='9')
 {
 	c=c-48;
 	num[c]++;
 }
 	for(j=0;j<10;j++)
	{
		
		printf("%d:%d¸ö\n",j,num[j]);

}
}
