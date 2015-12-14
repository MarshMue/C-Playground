#include <stdio.h>

#define MAXLINE 1000

int m_getline(char line[], int maxline);
void m_copy(char to[], char from[]);

/* print longest input line */
main() {
	int len; //current line lenght
	int max; //max line seen so far
	char line[MAXLINE]; //current input line
	char longest[MAXLINE]; //longest line

	max = 0;
	while ((len = m_getline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			m_copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
	return 0;
}

/*
 * method getline reads a line into s 
 * param s is the line to be read it
 * pram lim is the limit of the input line
 * return - the size of the line
 */
int m_getline(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c !='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}

/*
 * method copy copys a string
 * param to - the string to be copied into
 * param from - the string being copied
 */
void m_copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		i++;
}
