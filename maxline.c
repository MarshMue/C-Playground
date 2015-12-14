#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main() {
	int len; //current line lenght
	int max; //max line seen so far
	char line[MAXLINE]; //current input line
	char longest[MAXLINE]; //longest line

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
	return 0;
}

/*
 * method getline reads a line into s 
 * param s
