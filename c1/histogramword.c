#include <stdio.h>

main()
{
	int c, i, wl;
	int wordlen[11];

	wl = 0;
	for (i = 0; i <= 10; ++i)
		wordlen[i] = 0;

	while ((c = getchar()) != EOF)
	{
		//if end of word or no word
		if ((c == ' ' || c == '\n' || c == '\t'))
		{
			if (wl > 0)
			{
				if (wl >= 10)
					wordlen[10]++;
				else
					wordlen[wl]++;
				wl=0;
			}
		}
		else
		{
			wl++;
		}
	}

	printf("\n\n\t\tHistogram\n");
	for(i = 0; i <= 10; ++i)
	{
		printf("%d: ", i);
		while (wordlen[i] > 0)
		{
			printf("|");
			wordlen[i]--;
		}
		printf("\n");
	}
}
			


