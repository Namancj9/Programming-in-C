//Experiment 4: Loops
//4.4. The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.

#include <stdio.h>
#include <math.h> 

int main() {
    
    printf("Name - Naman Kataria\nSAP ID - 590025455\nCourse - BSC CS");
     printf("\n---------------------------------\n");
    
    double currentPopulation = 100000.0;
    double growthRate = 0.10; // 10%
    int totalYears = 10;

    double population = currentPopulation / pow(1.0 + growthRate, totalYears);

    printf("--- Population Growth Over the Last 10 Years ---\n");
    printf("Population at the start of the decade (10 years ago): %.0f\n", population);

    for (int year = 1; year <= totalYears; year++) {
        
        population = population * (1.0 + growthRate);

        int yearsAgo = totalYears - year; 
        
        if (yearsAgo == 0) {
            printf("Population at present (end of year 10): %.0f\n", population);
        } else {
            printf("Population at the end of year %d (%d years ago): %.0f\n", year, yearsAgo, population);
        }
    }

    return 0;
}
