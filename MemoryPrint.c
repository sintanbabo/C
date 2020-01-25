#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *a = (int*)malloc(sizeof(int));
	*a = 10;

	printf("a value : %p\n",a);
	printf("a address %p\n",&a);
	printf("a ref value : %d\n",*a);
	
	free(a);
	return 0;
}
