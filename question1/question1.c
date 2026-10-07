#include <stdio.h>
#include <stdlib.h>

// Function to calculate index and return status
const char* water_quality(double index) {
    if (index >= 80.0) {
        return "Good";
    } else if (index >= 60.0) {
        return "Warning";
    } else {
        return "Critical";
    }
}

int main(void) {
    double temperature, turbidity;
    
    // Prompt for temperature until a valid number is entered
    printf("Enter temperature (in Celsius): ");
    while (scanf("%lf", &temperature) != 1) {
        printf("Invalid input! Please enter a numeric value for temperature: ");
        while (getchar() != '\n'); // Clear text
    }

    // Prompt for turbidity until a valid number is entered
    printf("Enter turbidity (in NTU): ");
    while (scanf("%lf", &turbidity) != 1) {
        printf("Invalid input! Please enter a numeric value for turbidity: ");
        while (getchar() != '\n'); // Clear text
    }

    // Calculation formulas
    double temp_dev = abs((int)(temperature - 25));
    double turb_penalty = turbidity / 2.0;
    double index = 100.0 - (temp_dev + turb_penalty);

    const char* status = water_quality(index);

    //output
    printf("WATER QUALITY MONITORING REPORT\n\n");
    printf("Temperature Deviation: %.2f C\n", temp_dev);
    printf("Turbidity Penalty: %.2f NTU\n", turb_penalty);
    printf("Calculated Index: %.2f\n", index);
    printf("Water Quality Status: %s\n", status);

    return 0;
}