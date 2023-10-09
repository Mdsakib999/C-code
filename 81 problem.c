// C program to calculate the area of Cube?

#include <stdio.h>

float calculateAreaOfCube(float side) {
    return 6.0 * side * side;
}

int main() {
    float side, area;

    printf("Enter the length of side: ");
    scanf("%f", &side);

    area = calculateAreaOfCube(side);

    printf("Area of Cube is: %f\n", area);

    return 0;
}
