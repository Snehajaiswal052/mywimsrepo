#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("Executing a Linux shell command using C program.\n");
	printf("This line is newly added:\n");
	system("ls");
	return 0;
}
