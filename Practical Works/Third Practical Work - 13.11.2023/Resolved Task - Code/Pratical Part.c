//Pratical Part
//Student ID card: 231ADB294
//Name, Surname: Ngoc Bao Tram Tran
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    
    srand(time(NULL)); // initialize a starting point for generating of random numbers
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 13 - 6; // Generates a random number between -6 and 6
    }

    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    double average = sum / size;
    printf("Average value: %.2f\n", average);

    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Largest number: %d\n", max);

    free(arr);

    return 0;
}