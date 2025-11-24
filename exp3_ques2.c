#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input weight and height from the user
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display the BMI
    printf("Your BMI is: %.2f\n", bmi);

    // Check BMI category
    if (bmi < 18.5) {
        printf("You are underweight.\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("You have a normal weight.\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("You are overweight.\n");
    } else {
        printf("You are obese.\n");
    }

    return 0;
}
