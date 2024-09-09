//********************************************************
// fracturing,c
// Author: Matthew Perez
// Date: 9/7/2024
// Class: COP 3223C, Professor Parra
// Purpose: This program is to apply the
// knowledge of using multiple functions
// in one code and calling those functions in main.
// Input: the x1 and x2, then the y1 and y2.
//
// Output: the distance, perimeter, area, width, and height.
// //********************************************************

#include <stdio.h>
#include <math.h>

// Define constant for PI
#define PI 3.14159

// Function declarations
double calculateDistance();
void printDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
void getInput(double* x1, double* x2, double* y1, double* y2);

int main(int argc, char **argv) {
    printDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

// Function to get input for points (x1, x2, y1, y2)
void getInput(double* x1, double* x2, double* y1, double* y2) {
    printf("Input x1 and x2: ");
    scanf("%lf %lf", x1, x2); // Input x1 and x2
    printf("Input y1 and y2: ");
    scanf("%lf %lf", y1, y2); // Input y1 and y2
}
double calculateDistance(){
    double x1, x2, y1, y2;
    getInput(&x1, &x2, &y1, &y2);
    printf("Point #1 entered: x1 = %.2f, y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f, y2 = %.2f\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}



// Function to calculate and store the distance between two points
void printDistance() {
    
    double x1, x2, y1, y2,distance;
    distance = calculateDistance();
    
    printf("The distance between the two points is: %.3f\n", distance);
}

// Function to calculate the perimeter using the stored distance (as diameter)
double calculatePerimeter() {
     double x1, x2, y1, y2,distance;
     distance = calculateDistance();
    double perimeter = distance * PI ;
     
    printf("The perimeter of the circle is: %.3f\n", perimeter);
    return 3.0;
}

// Function to calculate the area using the stored distance (as diameter)
double calculateArea() {
    double x1, x2, y1, y2,distance;
    distance = calculateDistance();
    double radius = distance / 2.0;
    double area = PI * pow(radius, 2);
    
    printf("The area of the circle is: %.3f\n", area);
    return 2.5;
}

// Function to calculate the width (difference in x values)
double calculateWidth() {
    double x1, x2, y1, y2,distance;
    distance = calculateDistance();
    double width = distance;
    
    printf("The width is: %.3f\n", width);
    return 3.5;
}

// Function to calculate the height (difference in y values)
double calculateHeight() {
    double x1, x2, y1, y2,distance;
    distance = calculateDistance();
    double height = distance;
    
    printf("The height is: %.3f\n", height);
    return 2.0;
}