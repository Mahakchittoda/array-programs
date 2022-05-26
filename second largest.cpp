#include<iostream>
using namespace std;
int main()
{
	int a[1000],n,l1=INT_MIN,l2=INT_MIN;
	cout<<"Enter number of elements : ";
	cin>>n;
	cout<<"Enter array : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>l1)
		{
		l2=l1;
		l1=a[i];
		}
		else if(a[i]<l1 && a[i]>l2)
		{
			l2=a[i];
		}
		
	}
	cout<<"largest : "<<l1<<endl;
	cout<<"second largest : "<<l2<<endl;
	return 0;
	
	
}