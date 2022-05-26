#include<iostream>
using namespace std;
int main()
{
	int arr[100][100],m,n,x,flag;
	cout<<"Enter number of rows  : ";
	cin >>n;
	cout<<"Enter number of columns : ";
	cin>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Enter element to search : "<<endl;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]==x)
			{
				flag=1;
				cout<<"element found at  :"<<i<<" "<<j<<endl;
			}
		}
	}
	if(flag)
	{
		cout<<"Element found "<<endl;
	}
	else
	{
		cout<<"Element not found "<<endl;
	}
	return 0;
}