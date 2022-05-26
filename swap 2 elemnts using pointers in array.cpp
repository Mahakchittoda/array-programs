#include<iostream>
using namespace std;
int main()
{
	int temp,a[1000],n;
	cout<<"Enter number of elements : ";
	cin>>n;
	cout<<"Enter array : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	temp=*(a+1);
	*(a+1)=*(a+4);
	*(a+4)=temp;
	cout<<"New :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}