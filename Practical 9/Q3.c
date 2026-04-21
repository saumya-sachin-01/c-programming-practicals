#include <stdio.h>

void inputRatings(int ratings[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter rating (0-5) for user %d: ", i + 1);
        scanf("%d", &ratings[i]);
    }
}

void ratingCount(int ratings[], int n) {
    int counts[6] = {0}; 
    for (int i = 0; i < n; i++) {
        if (ratings[i] >= 0 && ratings[i] <= 5) {
            counts[ratings[i]]++;
        }
    }
    printf("\nRating Distribution:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d Stars: %d users\n", i, counts[i]);
    }
}

float averageRating(int ratings[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ratings[i];
    }
    return sum / n;
}

void checkStatus(float avg) {
    printf("\nAverage Rating: %.2f\n", avg);
    if (avg > 4.0) {
        printf("Movie Status: HIT\n");
    } else {
        printf("Movie Status: AVERAGE/FLOP\n");
    }
}

int main() {
    int n;
    printf("Enter number of users: ");
    scanf("%d", &n);

    int ratings[n];

    inputRatings(ratings, n);
    ratingCount(ratings, n);
    float avg = averageRating(ratings, n);
    checkStatus(avg);

    return 0;
}