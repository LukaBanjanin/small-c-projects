#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Luka Banjanin
250968309
this program randomly calculates the value of pi multiple times
you must compile this program with gcc -lm pi.c */
//pi estimating function
double estimate_pi(long long n) {
    double x, y, radius, ratio;
    for(int t = 0; t < n; t++) {
        
        x = ((double) rand() / (double) RAND_MAX);
        y = ((double) rand() / (double) RAND_MAX);
        radius = pow(y, 2) + pow(x, 2);
        if(radius <= 1) ratio++;
    }
    ratio = ((double) 4 * ratio / (double) n);
    return ratio;
}

int main() {
    long long iter;
    double pi, mean, std_div;
    printf("Enter a number of iterations: ");
    scanf(" %lld", &iter);
    if(!iter) {
        printf("Error: Invalid input!");
        return 1;
    }
    for(int i = 0; i < 10; i++) {
//call to function to set calculated value of pi
        pi = estimate_pi(iter);
        mean += pi;
        std_div += pow(pi, 2);
        printf("Iteration: %d | PI: %.10f \n", i + 1, pi);

    }
    mean = mean / (double) 10;
    std_div = sqrt((std_div / (double) 10) - pow(mean, 2));
    printf("Standard deviation: %.10f\nMean: %.10f \n", std_div, mean);
    return 0;
}
