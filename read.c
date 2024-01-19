#include <stdio.h>
#include <stdlib.h>

//write a function that reads in a file
char* readFile(char *);

//void getFileName(FILE *);
void getFileName();

int main(void) {
	getFileName();
	return 0;
}

//void getFileName(FILE *fp) {
void getFileName() {
	char buffer[BUFSIZ];
	printf("Enter a filename:\n");
	fgets(buffer, BUFSIZ, stdin);
	printf("got filename:\n%s", buffer);
}
/*
char* readFile(char *fName) {
	char buffer[BUFSIZ];
	FILE *fp; // fp - file pointer
	
	fp = fopen(*fName, "r");
	// lets start with just one line
	// while(fgets(buffer, BUFSIZ + 1, fp)) {}
	
}
*/
