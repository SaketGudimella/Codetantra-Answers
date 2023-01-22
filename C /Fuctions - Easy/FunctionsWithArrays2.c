#include <stdio.h>
void read(int [], int);
void display(int [], int);
void main() {
	int a[10], n;
	printf("Enter n value : ");
	scanf("%d", &n);
	read(a,n ); // Write the arguments in the function call
	display(a,n); // Write the arguments in the function call
}
void read(int a[100], int n ) { // Write the arguments in the function definition
	int i;
	printf("Enter %d elements : ", n);
	for (i=0;i<n;i++ ) { // Complete the code in for
		scanf("%d",&a[i] ); // Complete the statement
	}
}
void display(int a[100], int n ) { // Write the arguments in the function definition
	int i;
	printf("Elements in the array are : ");
	for (i=0; i<n; i++ ) { // Complete the code in for
		printf("%d ", a[i] ); // Complete the statement
	}
}
