#include<iostream>
using namespace std;
int main()
{
	int a[100],even[100],odd[100],n,j=0,k=0;
	cout<<"Enter number of elements : ";
	cin>>n;
	cout<<"Enter array";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even[j]=a[i];
			j++;
		}
		else
		{
			odd[k]=a[i];
			k++;
		}
	}
	cout<<"Even : "<<endl;
	for(int i=0;i<j;i++)
	{
		cout<<even[i]<<" ";
	}
	cout<<endl;
	cout<<"Odd : "<<endl;
	for(int i=0;i<k;i++)
	{
		cout<<odd[i]<<" ";
	}
	return 0;
}