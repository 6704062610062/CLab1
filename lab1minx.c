#include<stdio.h>

int main() {
	int n1;
	int n2;
	
	printf("input n1: ");
	scanf("%d", &n1);
	
	printf("input n2: ");
	scanf("%d", &n2);
	
	if(n1 > n2) {
		int total = n1 - n2;
		printf("num1 greater than num2 = %d", total);
	} 
	else {
		int total = n2 - n1;
		printf("num2 greater than num1  =%d", total);
	}
}
