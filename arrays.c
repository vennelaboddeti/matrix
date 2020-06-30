#include<stdio.h>
int main()
{
	int i,j,sod = 0;
	int a[3][3];
	int *arr[3][3];
	// inserting and reading elements in array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the element a[%d][%d] :\n ",i,j);
			scanf("%d",&a[i][j]);
			arr[i][j]=&a[i][j];
		}
	}
	printf("input elements in matrix:\n");
	//to print input elements using pointer
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element a[%d][%d] : %d\n ",i,j,*arr[i][j]);
			if (i==j)
			{
				sod=sod + *arr[i][j];   // for summation of diagonal elements
			}
		}
	}
	
	printf("the sum of diagonal elements of matrix is %d",sod);
	return (0);
	
	
}
