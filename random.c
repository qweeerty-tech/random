#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int size = 200;\
	// Checks if amount of numbers is specified.
	if(argc > 1) {
		int try;
		if(sscanf(argv[1], "%d", &try)) {
			if(try > 0) {
				size = try;
			}
		}
	}
	srand(time(NULL));
	for(int i = 0; i < size; i++) {
		printf("%d", rand() % 10);
	}
	return 0;
}