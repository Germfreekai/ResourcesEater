#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void* eatAll(void* vargs);

int main(void)
{

	pthread_t pthread;

	while(1)
	{

		printf("yes\n"); 

	}

	return EXIT_SUCCESS;

}
