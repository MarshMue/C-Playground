#include <stdio.h>

main()
{
	int c, lastc;
	lastc = 'a';

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t')
			if (lastc == ' ' || lastc == '\t')
				;
			else
				printf("\n");
		else
			putchar(c);
		lastc = c;
	}
}
