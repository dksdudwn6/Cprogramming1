#include <stdio.h>
#include <math.h>

double calculateMean(double arr[], int size) {
    double sum = 0.0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum / size;
}

double calculateStandardDeviation(double arr[], int size) {
    double mean = calculateMean(arr, size);
    double sum_squared_diff = 0.0;

    for (int i = 0; i < size; ++i) {
        double diff = arr[i] - mean;
        sum_squared_diff += pow(diff, 2);
    }

    double variance = sum_squared_diff / size;
    return sqrt(variance);
}

int main() {
    double numbers[5];

    printf("Enter 5 real numbers:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf_s("%lf", &numbers[i]);
    }

    double standardDeviation = calculateStandardDeviation(numbers, 5);
    printf("Standard Deviation: %lf\n", standardDeviation);

    return 0;
}
