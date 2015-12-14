#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

main() 
{
	float cel, fahr;
	int low, step, upper;

	low = 0;
	step = 20;
	upper = 300;

	cel = low;
	while (cel <= upper) 
	{
	 	fahr = cel * (9.0/5.0) + 32.0;
		printf("%3.0f %6.1f\n", cel, fahr);
		cel+=step;
	}
	
	int fahr2;
	printf("\n\n");
	for (fahr2 = UPPER; fahr2 >= LOWER; fahr2 = fahr2 - STEP)
		printf("%3d %6.1f\n", fahr2, (5.0/9.0)*(fahr2-32));

}
