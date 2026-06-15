//Exercise 2 - Warm up 
//Student ID card: 231ADB294
//Name, Surname: Ngoc Bao Tram Tran

#include <stdio.h>

int main() {
    float Temperature;
    printf ("Your Temperature: ", "\n");
    scanf ("%f", &Temperature);
    
    if (Temperature < 35) {
        printf("Too cold! \n");
    } else if (Temperature > 37) {
        printf("Too hot! \n");
    } else {
        printf ("Everything looks good!");
    }
    return 0;
}



