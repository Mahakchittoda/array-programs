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
	for(int i=0;i<n;i=i+2)
	{
		temp=*(a+i);
		*(a+i)=*(a+(i+1));
		*(a+(i+1))=temp;
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}