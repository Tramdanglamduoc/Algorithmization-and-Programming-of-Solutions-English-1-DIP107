//Main Task
//Student ID card: 231ADB294
//Name, Surname: Ngoc Bao Tram Tran

#include <stdio.h>

int main() {
    long long a, b;

    printf("Enter integer a: ");
    scanf("%lld", &a);

    printf("Enter integer b: ");
    scanf("%lld", &b);

    long long sum;
    int count;
    sum = a + b;

    if (sum < 20) {
        int OddCount = 0;
        for (count = 0; count < sum; OddCount++, count += 2);
        printf("Number of odd numbers between 0 and %lld is: %d", sum, OddCount);
    }

    else if (sum > 20) {
        long long DivisibleBy7Count;
        DivisibleBy7Count = (sum - 20) / 7 + 1; 
        printf("Number of numbers divisible by 7 between 20 and %lld is: %lld", sum, DivisibleBy7Count);
    }
    
    else {
        printf ("Number of numbers divisible by 7 between 20 and 20 is: 0");
    }

    return 0;
}

