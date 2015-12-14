#include <stdio.h>

	int func(unsigned int n) {
		return n && !(n & (n - 1));
	}

main()
{
	int i;
	for (i = 0; i <= 1000; i++) {
		if(func(i) == 1)
			printf("%d\n", i);
	}
}
