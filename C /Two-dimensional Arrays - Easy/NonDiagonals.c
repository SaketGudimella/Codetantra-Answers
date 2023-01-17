#include<stdio.h>
int main(){
	int o,i,j;
	scanf("%d", &o);
	int matrix[o][o];
	for (i=0;i<o;i++){
		for (j=0;j<o;j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	for (i=0;i<o;i++){
		for (j=0;j<o;j++){
			if(i!=j)
				printf("%d ", matrix[j][i]);
			}
		}
	return 0;
};

	
