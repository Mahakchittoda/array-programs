#include<stdio.h>
#include<conio.h>
# define MAX 50
int main()
{
	int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
	int arows,acols,brows,bcols;
	int i,j,k,sum=0;
	printf("Enter Rows and columns of 1st matrix : ");
	scanf("%d %d",&arows,&acols);
	printf("Enter the elements of matrix 1 : \n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<acols;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Rows and columns of 2nd matrix :  ");
	printf("\n");
	scanf("%d %d",&brows,&bcols);
	if(acols!=brows)
	{
		printf("You cannot multiply these matrices .");
	}
	else
	{
	printf("Enter the elements of matrix 2 : \n");
	for(i=0;i<brows;i++)
	{
		for(j=0;j<bcols;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<brows;j++)
		{
			for(k=0;k<bcols;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			product[i][j]=sum;
			sum=0;
		}
	}
	printf("Resultant matrix\n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcols;j++)
		{
			printf("%d",product[i][j]);
		}
		printf("\n");
	}
	return 0;
	
	}
	
}