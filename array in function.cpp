#include<stdio.h>
int add(int *b,int len)
{
	int sum =0,i;
	for(i=0;i<len;i++)
	{
		sum=sum+b[i];
	}
	return sum;
}
int main()
{
	int a[]={1,2,3,4};
	int len=sizeof(a)/sizeof(a[0]);
	printf("%d",add(a,len));
	return 0;
}
