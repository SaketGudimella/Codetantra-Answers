#include <stdio.h>
int check_prime(int);
void main() {
	int n, i, flag = 0;
	printf("Enter a positive integer : ");
	scanf("%d", &n);
	for (i=2;i<=n/2;i++) { // Complete the code in for
		if (check_prime(i ) == 1) { // Complete the statement
			if (check_prime(n-i ) == 1) { // Complete the statement
				printf("%d = %d + %d\n", n, i, n - i);
				flag = 1;
			}
		}
	}
	if (flag== 0){ // Complete the statement
		printf("%d cannot be expressed as the sum of two prime numbers\n", n);
	}
}
int check_prime(int n) {
	int i, isPrime = 1;
	for (i=2;i<=n/2;++i) { // Complete the code in for
		if(n%i==0) { // Complete the statement
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}
