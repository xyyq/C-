#include <stdio.h>
void main()

{
	char c;
	int num[10]={0,0,0,0,0,0,0,0,0,0},letters=0,others=0,space=0,i,j;
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		 letters++;
		else if(c==' ')
		 space++;
		else if(c>='0'&&c<='9')
		{ 
			c=c-48;
			num[c]++;
		
			
		}
		else
			others++;	
	}
	printf("��%d���ո�\n",space);
	printf("��%d����ĸ\n",letters);
	printf("��%d�������ַ�\n",others);

	for(j=0;j<10;j++)
	{
		if(num[j]!=0)
		printf("%d:%d��\n",j,num[j]);

	 } 
	

}
