#include <stdio.h>
main()
{
	int a[10]={-12,0,6,16,23,56,80,100,110,115};
	int i=0,j=9,k=4,low=0,high=9,mid=(low+high)/2,num;
	
	printf("��������Ҫ���ҵ�����");
	scanf("%d",&num);
	

	while (low<=high)
	{
	while(num<a[0]||num>a[9])
	goto loop;
	if(a[mid]==num)
	{printf("���ҵ�����������a[%d]��",mid);break;}
	else if(a[mid]>num)
	{high=mid-1;mid=(low+high)/2;}
	else
	{low=mid+1;mid=(low+high)/2;}
	}
	loop:
	printf("���ҵ�������������"); 
}
/*#include <stdio.h>
main()
{
	int a[9]={-12,0,6,16,23,56,80,100,110};
	int i=0,j=9,k=4,low=0,high=8,mid,num;
	
	printf("��������Ҫ���ҵ�����");
	scanf("%d",&num);
	

	while (low<=high)
	{
	mid=(low+high)/2;
	if(a[mid]==num)
	{i=1;break;}
	else if(a[mid]>num)
	{high=mid-1;}
	else
	{low=mid+1;}
	}
	if(i==1)
	{mid=mid+1;printf("���ҵ����������%d��λ��",mid);} 
	else 
	printf("���ҵ�������������");
	}*/ 
