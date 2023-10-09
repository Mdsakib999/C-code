// C program to calculate the area of Trapezium???


#include <stdio.h>

float calculateAreaOfTrapezium(float base1, float base2, float height) {
    return 0.5 * (base1 + base2) * height;
}

int main() {
    float base1, base2, height, area;

    printf("Enter base1, base2, and height: ");
    scanf("%f %f %f", &base1, &base2, &height);

    area = calculateAreaOfTrapezium(base1, base2, height);

    printf("Area of Trapezium is: %f\n", area);

    return 0;
}

