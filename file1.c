#include <stdio.h>
int main() {
	int num1, num2, sum;
	printf("enter the first digit");
	scanf("%d", &num1);
	printf("enter the 2nd digit"));
	scanf("%d", &num2);
	sum= num1 + num2;
	printf(" the sum of %d and %d is %d\n", num1, num2, sum);
	return 0
}

//Another program to check if number is even or odd

#include <stdio.h>
int main() {
	printf("enter a number");
	scanf("%d", &num);
        if (num%2==0) {
		printf("%d is an even number\n");
	} else {
		printf("%d is an odd number\n");
	}


