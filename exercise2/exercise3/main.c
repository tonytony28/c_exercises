
#include "dotp.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, result;
    int *firstVector, *secondVector;


    printf("Enter length of vectors: ");
    scanf("%d", &n);

    firstVector = (int *)malloc(n * sizeof(int));
    secondVector = (int *)malloc(n * sizeof(int));
    retrieveData(n, firstVector);
    retrieveData(n, secondVector);
    result = dotProduct(n, firstVector, secondVector);
    printf("%d\n", result);
    free(firstVector);
    free(secondVector);
    return 0;
}