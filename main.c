#include <stdio.h>
#include <stdlib.h>

void scalar_multi(int *, size_t, int);

int main() {
	printf("Testing\n");
	
	size_t length = 10;
	int *vct = (int*)malloc(sizeof(int) * length);
	//int vct[10] = {1,2,3,4,5,6,7,8,9,10};

	*vct = {1,2,3,4,5,6,7,8,9,10};
	int scl = 4;
	//
	scalar_multi(vct, length, scl);
	// for(int i = 0; i < 2; i++) {
		// printf("%d", result[i]);
	//}
	printf("result: %d \n", *result);
	printf("result: %d \n", result[1]);
	printf("result: %d \n", result[2]);
	printf("Size from main %ld \n", sizeof(vct));	

	free(vct);
	return 0;
}

// Functional Programming???
void scalar_multi(int *vect, size_t len, int scalar) {
	// Point to the top of vect
	int *ptr = vect;
	int i = 0;
	//int axis_len = sizeof(&vect);
	//printf("vector length: %d \n", axis_len);
	
	while(i < len) {
		printf("vector entry: %d \n", vect[i]);
		vect[i++] *= scalar;
	}
	
}
