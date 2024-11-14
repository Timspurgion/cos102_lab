#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    // Input two angles
    printf("Enter the first angle of the triangle: ");
    scanf("%f", &angle1);
    printf("Enter the second angle of the triangle: ");
    scanf("%f", &angle2);

    // Calculate the third angle
    angle3 = 180 - (angle1 + angle2);

    // To check if it's a right-angled triangle
    if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        printf("The triangle is a right-angled triangle.\n");
    } else {
        printf("The triangle is not a right-angled triangle.\n");
    }

    return 0;
}
