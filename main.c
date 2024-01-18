#include <stdio.h>

int* scalar_multi(int *, int);

int main() {
	printf("Testing\n");
	int vct[10] = {1,2,3,4,5,6,7,8,9,10};
	int scl = 4;
	int *result = scalar_multi(vct, scl);
	// for(int i = 0; i < 2; i++) {
		// printf("%d", result[i]);
	//}
	printf("result: %d \n", *result);
	printf("result: %d \n", result[1]);
	printf("result: %d \n", result[2]);
	printf("Size from main %ld \n", sizeof(vct));	

	return 0;
}

int* scalar_multi(int *vect, int scalar) {
	int *ptr = vect;
	int i = 0;
	int axis_len = sizeof(&vect);
	printf("vector length: %d \n", axis_len);
	
	while(i < axis_len) {
		printf("vector entry: %d \n", vect[i]);
		vect[i++] *= scalar;
	}
	
	return vect;
}
