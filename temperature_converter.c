#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Prompt user for input
    printf("Enter temperature in Celsius: ");

    // Read Celsius temperature
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit using the formula F = (C * 9/5) + 32
    fahrenheit = (celsius * 9.0/5.0) + 32.0;

    // Display the converted temperature with two decimal places
    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);

    return 0;
}
