#include<stdio.h>
int main()
{
int a[20],b[20],c[20],i,j=0,k=0,n;;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
	if(a[i]%2==0)
      {
      	b[j]=a[i];
      	j++;
	 }
	 else{
	 	c[k]=a[i];
	 	k++;
	 }
}
printf("even no array is :");
for(i=0;i<j;i++)
{
	printf("%d",b[i]);
}
printf("\nprint odd");
for(i=0;i<k;i++){
	printf("%d",c[i]);
}
return 0;

}