#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10},sum=0,*p;
	for(p=&a[0];p<=&a[9];p++)
	{
		sum=sum+*p;
	}
	printf("Sum of elements : %d ",sum);
	return 0;
}