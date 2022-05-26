#include<iostream>
using namespace std;
int main()
{
	int n,m,arr[100][100];
	cout<<"Enter number of rows : ";
	cin>>n;
	cout<<"Enter number of columns : ";
	cin>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"2 D Array : "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}