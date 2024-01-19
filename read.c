#include <stdio.h>
#include <stdlib.h>

// Filenames shouldn't really be bigger than this
#define NAME_SIZE 256

//write a function that reads in a file
char* readFile(char *);

//void getFilename(FILE *);
void getFilename();

int main(void) {
	getFilename();
	return 0;
}

//void getFilename(FILE *fp) {
void getFilename() {
	char buffer[NAME_SIZE];
	printf("Enter a filename:\n");
	fgets(buffer, NAME_SIZE, stdin);
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
