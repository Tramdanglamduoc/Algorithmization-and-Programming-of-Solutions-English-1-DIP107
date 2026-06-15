//Lab.Work 1
//Student ID card: 231ADB294
//Name, Surname: Ngoc Bao Tram Tran

#include <stdio.h>
#include <math.h>

int main() {
    long double x;
    char repeat;
    
    do {
        printf("Enter x: ");
        scanf("%Lf", &x);
        
        if(pow(x,3) - 10*x < 0) {
             printf("Check again \n");
             continue;
        }
        
        long double a = sqrt(pow(x,3) - 10*x);
        long double b = pow(x,3) + x + 5;
        long double y;
    
        if (pow(a,3) != 0) {
            long double y_1 = ((pow(a,2) + pow(b,2))/4);
            printf("y= %Lf \n", y_1);
        }

        if (pow(a,3) == 0) {
            long double y_2 = a*(b-1)*(a-b);
            printf("y = %Lf \n", y_2);
        }
        
        
        printf("Do you want to repeat? (Y/N): ");
        scanf(" %c", &repeat);
        
    } while (repeat == 'Y' || repeat == 'y');
    
    return 0;
}
