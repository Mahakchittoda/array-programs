#include<iostream>
using namespace std;
int main()
{
	int i,n,a[1000];
	cout<<"Enter Array size : ";
	cin>>n;
	cout<<"Enter elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Reverse of array : ";
	for(i =n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}