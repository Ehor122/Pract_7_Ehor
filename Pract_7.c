#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;
    printf("Enter the coordinates and radius of the first circle (x1 y1 r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    printf("Enter the coordinates and radius of the second circle (x2 y2 r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);

    // The distance between the centers of the two circles
    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    if (x1 == x2 && y1 == y2 && r1 == r2) {
        // The circles coincide
        printf("-1\n");
    } else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        // The circles do not intersect
        printf("0\n");
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        // The circles have one intersection point
        printf("1\n");
    } else {
        // The circles have two intersection points
        printf("2\n");
    }

    return 0;
}
