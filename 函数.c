#include <stdio.h>
void main()

{
	char c;
	int num[10]={0},letters=0,others=0,space=0,i,j;
	while(c=getchar()!='\n')
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		 letters++;
		else if(c=' ')
		 space++;
		else if(c>='0'&&c<='9')
		{ 
			c=c-48;
			num[c]++;
		}
		else
		others++;	
	}
	printf("有%d个空格",space);
	printf("有%d个字母",letters);
	printf("有%d个其它字符",others);
	for(j=0;j<10;j++)
	{
		
		printf("%d:%d个\n",j,num[j]);

	 } 
	

}
