#include <stdio.h>
main()
{
	int a[10]={-12,0,6,16,23,56,80,100,110,115};
	int i=0,j=9,k=4,low=0,mid,high=9,num;
	
	printf("��������Ҫ���ҵ�����");
	scanf("%d",&num);
	

	while (low!=high)
	{
	if(a[mid]=num)
	{mid=mid+1;printf("���ҵ����������е�%d��λ��",mid);break;}
	else if(a[mid]>num)
	{high=mid-1;mid=(low+high)/2;}
	else
	{low=mid+1;mid=(low+high)/2;}
	}
	
	
}
