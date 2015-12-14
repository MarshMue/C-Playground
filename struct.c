#include <stdio.h>
typedef struct memes {
		int k;
		int e;
		int j;
	} dank; 

int main() {
	dank meme;
	dank* dream;
	dank reality;
	dream = &reality;

	meme.k = 12;
	meme.e = 420;
	meme.j = 69;

	dream->k = 12;
	dream->e = 420;
	dream->j= 69;

	printf("meme k: %d\n", meme.k);
	printf("wew e: %d\n", dream->e);
}
	
