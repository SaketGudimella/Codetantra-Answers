#include <stdio.h>

int i, l;
int search(int, int *, int);
int main(){
	int n,m;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++){
		scanf("%d", &a [i]); }
		scanf("%d", & m); search(n, a, m);
		return 0;}
		int search(int n, int *a, int m) {
			for(i = 0; i < n; i++) {
				if (m == a[i]){
					l = 1;
					break;
				}
			} 
			if(l == 1){
				printf("1");
			} else {
				printf("-1");
			}
		}
