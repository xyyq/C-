#include <stdio.h>
void main()

{
	char c;
	int num[10]={0},letters=0,others=0,space=0,i,j;
	while(c=getchar()!='\n')	
	{
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		 letters++;
	else 
		others++;
		
		}
		printf("%c\n",c);
		printf("%d\n%d\n",others,letters);
}
