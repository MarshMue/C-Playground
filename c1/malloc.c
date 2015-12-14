#include <stdio.h>
#include <stdlib.h>
main() {
	int* memes;
	memes = (int*)malloc(sizeof(int)*5);
	int i;
	for (i = 0; i < 5; i++)
		memes[i] = i;

	for (i = 0; i < 5; i++)
		printf("i: %d\n", memes[i]);

	printf("\n");

	for (i = 0; i < 5; i++)
		printf("address of i = %p\n", &memes[i]);
	free(memes);
}
