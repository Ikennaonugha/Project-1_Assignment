#include <stdio.h>

int calculate_total(const int distances[], int size);
double calculate_average(int total_distance, int size);
int find_longest_route(const int distances[], int size);
int count_routes_above_limit(const int distances[], int size, int limit);
int recursive_sum(const int distances[], int size);

int calculate_total(const int distances[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += distances[i];
    }
    return sum;
}

// Function Reuse Example
double calculate_average(int total_distance, int size) {
    if (size == 0) return 0.0;
    return (double)total_distance / size;
}

// Find maximum value
int find_longest_route(const int distances[], int size) {
    int max = distances[0];
    for (int i = 1; i < size; i++) {
        if (distances[i] > max) {
            max = distances[i];
        }
    }
    return max;
}

// Count routes above limit
int count_routes_above_limit(const int distances[], int size, int limit) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (distances[i] > limit) {
            count++;
        }
    }
    return count;
}

// Recursive Sum
int recursive_sum(const int distances[], int size) {
    if (size <= 0) {
        return 0;
    }
    return distances[size - 1] + recursive_sum(distances, size - 1);
}

int main(void) {
    int distances[] = {12, 25, 18, 40, 15, 30};
    int n = 6;
    int limit = 20;

    int total = calculate_total(distances, n);
    double avg = calculate_average(total, n); 
    int longest = find_longest_route(distances, n);
    int above_limit = count_routes_above_limit(distances, n, limit);
    int rec_sum = recursive_sum(distances, n);

    //output
    printf("DELIVERY DISTANCE ANALYSIS\n\n");
    printf("Total distance: %d km\n", total);
    printf("Average distance: %.2f km\n", avg);
    printf("Longest route: %d km\n", longest);
    printf("Routes above %d km: %d\n\n", limit, above_limit);
    printf("Recursive sum: %d km\n", rec_sum);

    return 0;
}