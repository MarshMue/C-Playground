#include <stdio.h>

main() {
	int i_array[10];
	char c_array[10];
	int *ip;

	ip = i_array;
	printf("i_array: %p; *ip = %d", i_array, *ip);
}
