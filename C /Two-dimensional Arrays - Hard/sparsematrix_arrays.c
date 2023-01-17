#include <stdio.h>
int main(){
	int n,m,i,j;
	printf("Enter the row & column sizes of the sparse matrix : ");
	scanf("%d%d", &m,&n);
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the value of sparse_matrix[%d][%d] : ",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("Original matrix scanned is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Sparse matrix array (Triplet) representation is:\n");
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	   {
	   	if(a[i][j]!=0)
	   	{
	   		printf("%d ",i);
	   	}
	   }
	} 
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				printf("%d ",j);
			}
		}
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(a[i][j]!=0)
		{
			printf("%d ",a[i][j]);
		}
	    }
	}
	printf("\n");
}
	
