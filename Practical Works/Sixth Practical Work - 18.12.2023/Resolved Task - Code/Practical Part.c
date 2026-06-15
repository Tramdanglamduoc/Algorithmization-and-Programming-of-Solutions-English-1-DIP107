#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define ARRAY_SIZE 3

// Function to display the contents of the array
void displayArray(float arr[ARRAY_SIZE][ARRAY_SIZE]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        for (int j = 0; j < ARRAY_SIZE; j++) {
            printf("%.2f ", arr[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate values a, b, and c
void calculateValues(float arr[ARRAY_SIZE][ARRAY_SIZE]) {
    float smallestValue = arr[0][0];
    float largestValue = arr[0][0];

    // Find the smallest and largest values in the array
    for (int i = 0; i < ARRAY_SIZE; i++) {
        for (int j = 0; j < ARRAY_SIZE; j++) {
            if (arr[i][j] < smallestValue) {
                smallestValue = arr[i][j];
            }
            if (arr[i][j] > largestValue) {
                largestValue = arr[i][j];
            }
        }
    }

    float a = fabsf(smallestValue);
    float b = sqrtf(largestValue);
    float c = -fabsf(a - b);

    printf("\nValues:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.2f\n", c);
}

int main() {
    const float R_MIN = -10.00;
    const float R_MAX = 5.00;
    float array[ARRAY_SIZE][ARRAY_SIZE];

    srand((unsigned int)time(NULL)); // Seed for random number generation

    // Fill the array with random numbers within the specified range
    for (int i = 0; i < ARRAY_SIZE; i++) {
        for (int j = 0; j < ARRAY_SIZE; j++) {
            array[i][j] = ((float)rand() / RAND_MAX) * (R_MAX - R_MIN) + R_MIN;
        }
    }

    // Display the contents of the array
    printf("Array Contents:\n");
    displayArray(array);

    // Calculate values a, b, and c
    calculateValues(array);

    return 0;
}
