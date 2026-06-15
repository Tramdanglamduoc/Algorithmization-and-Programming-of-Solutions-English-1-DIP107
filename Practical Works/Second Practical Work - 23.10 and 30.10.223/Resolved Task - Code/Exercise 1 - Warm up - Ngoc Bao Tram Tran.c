//Exercise 1 - Warm up 
//Student ID card: 231ADB294
//Name, Surname: Ngoc Bao Tram Tran

#include <stdio.h>

int main() {
    char User_Name[28];
    printf ("User Name: ", "\n");
    scanf ("%s", &User_Name);
        
    int User_Age;
    printf ("Age of %s: ", &User_Name, "\n");
    scanf ("%i", &User_Age);
    
    int Years_to_reach_100_years_old;
    int Years_have_reached_100_years_old;
    
    if (User_Age < 0) {
        printf("Invalid age entered. Please enter a valid age.\n");
    } else if (User_Age >= 100) {
        Years_have_reached_100_years_old = User_Age - 100;
        printf("You've already reached your 100th anniversary! You had reached your 100th anniversary for %i years. \n", Years_have_reached_100_years_old);
    } else {
        Years_to_reach_100_years_old = 100 - User_Age;
        printf ("You have to take %i years to reach the 100th anniversary.", Years_to_reach_100_years_old);
    }
    return 0;
}