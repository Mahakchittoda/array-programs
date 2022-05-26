#include<iostream>
using namespace std;
void binary_conv(int);
int main()
{
	int n;
	cout<<"Enter decimal number : ";
	cin>>n;
	cout<<"binary equivalent : ";
    binary_conv(n);
    
    
    
return 0;
}
void binary_conv(int n)
{ int r,a[100],i;
	for(i=0;n!=0;i++)
	{
		r=n%2;
		a[i]=r;
		n=n/2;
    }
     for(i=i-1;i>=0;i--)
    {
    	cout<<a[i]<<" ";
	}
}
