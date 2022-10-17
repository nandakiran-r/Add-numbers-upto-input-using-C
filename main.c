#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, number, sum=0;
	printf("Enter a number : ");
	scanf("%d", &number);
	for(i=1;i<=number;i++){
		sum=sum+i;
	}
	printf("Result = %d", sum);

	return EXIT_SUCCESS;
}
