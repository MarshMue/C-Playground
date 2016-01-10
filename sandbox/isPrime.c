#include <stdio.h>

int main (int argc, char* argv[]) {
	int num;
	int arg;
	int prime;
	int itr;

	
	while (1) {
		printf("Enter an integer, 0 to exit\n");
		arg = scanf("%d", &num);		
	  	if (arg <= 0){	
			printf("Not an int\n\n");
		}
		else if (num == 0) {
			return 0;
		}
		else {
			if (num < 0)
				num*= -1;
			prime = 0;
			for (itr = 2; itr < num; itr++) {
				if (num % itr == 0)
					prime = 1;
			}

			if (prime == 1)
				printf("%d is not prime\n\n", num);
			else
				printf("%d is prime\n\n", num);
		}
	}
}



			

