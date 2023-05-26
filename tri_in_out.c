#include <stdio.h>
#include <math.h>

// Function to calculate the distance between two points
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate the area of a triangle given its three vertices
double triangle_area(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Function to determine if a point is inside a triangle
int point_in_triangle(double x, double y, double x1, double y1, double x2, double y2, double x3, double y3) {
    double ABC_area = triangle_area(x1, y1, x2, y2, x3, y3);
    double PBC_area = triangle_area(x, y, x2, y2, x3, y3);
    double PAC_area = triangle_area(x1, y1, x, y, x3, y3);
    double PAB_area = triangle_area(x1, y1, x2, y2, x, y);
    return (ABC_area == PBC_area + PAC_area + PAB_area);
}