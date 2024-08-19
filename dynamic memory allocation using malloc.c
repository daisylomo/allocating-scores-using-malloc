#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, *scores;
    int size;

    printf("How many scores?\n");
    scanf("%d", &size);

    // Allocate memory for 'size' integers
    scores = (int*) malloc(size * sizeof(int));
    
    // Check if malloc was successful
    if (scores == NULL) {
        printf("No space available\n");
        exit(1);
    }

    printf("Address of the first byte is %p\n", (void*)scores);

    printf("Input the scores:\n");
    for (p = scores; p < scores + size; p++) {
        scanf("%d", p);
        printf("%d is stored in address %p\n", *p, (void*)p);
    }

    // Free allocated memory
    free(scores);

    return 0;
}
