#include<iostream>
using namespace std;
int main()
{
	int n ,a[1000];
	cout<<"Enter no. of elements : ";
	cin>>n;
	cout<<"Enter array elments : ";
	for(int i;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0,j=n-1;i<n/2;i++,j--)
	{
		int temp;
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	cout<<"Array after reversing : ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}