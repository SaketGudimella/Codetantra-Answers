#include<stdio.h>
int main(){
	int n,m;
	int matrix[10][10],i,j;
	scanf("%d", &m);
	scanf("%d", &n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
