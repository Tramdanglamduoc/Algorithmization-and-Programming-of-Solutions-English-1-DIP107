#include <stdio.h>
#include <stdlib.h>

void get_min_med_max(int array[], int length, int *min, float *med, int *max) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    *min = array[0];
    *max = array[length - 1];

    if (length % 2 == 0) {
        *med = (float)(array[length / 2 - 1] + array[length / 2]) / 2;
    } else {
        *med = array[length / 2];
    }
}

int main() {
    int length;
    printf("Enter the length of the array (minimum 5): ");
    scanf("%d", &length);

    if (length < 5) {
        printf("Length should be at least 5. Exiting...\n");
        return 1;
    }

    int *arr = (int *)malloc(length * sizeof(int));

    printf("Enter %d elements of the array:\n", length);
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    int min, max;
    float med;

    get_min_med_max(arr, length, &min, &med, &max);
    printf("Minimum: %d, Median: %.1f, Maximum: %d\n", min, med, max);

    free(arr);
    return 0;
}
