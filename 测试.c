#include <stdio.h> 
#define Max(a,b) ((a)>(b)?(a):(b))

void main()

{
		int a,b,c,max,min;
		scanf("%d %d %d",&a,&b,&c); 
		if(a>b) {max=a;min=b;}
		else
			max=b;min=a;
		if(max<c)
			max=c;
		else 
			if(min>c)
				min=c;
		printf("最大数是%d,最小数是%d",max,min)	;				 
		
		
}
