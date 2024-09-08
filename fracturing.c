//********************************************************
// fracturing,c
// Author: Matthew Perez
// Date: 9/7/2024
// Class: COP 3223C, Professor Parra
// Purpose: This program is to apply the
// knowledge of using multiple functions
// in one code and calling those functions in main.
// Input: the x1 and y1, then the x2 and y2.
//
// Output: the distance, perimeter, area, width, and height.
// //********************************************************

//including the libraries so that I can use certain functions like 'pow' and 'sqrt'
#include <stdio.h>
#include <math.h>

// defining PI as 3.14159 so that I can use 'PI' instead of having to write out 3.14159 every time.
#define PI 3.14159

// Declaring all the functions I will be using.
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// int main is where I will call all the functions that I created.
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}

//The function that will take two coordinates as an input and calculate the distance between the two points
double calculateDistance() {
    double x1, y1, x2, y2;
    static int counter = 0;
//Using 'scanf' so that I can take in the variables x1, y1, x2, and y2 and assigning the variabnles to values
    scanf("%lf %lf", &x1, &x2);

    scanf("%lf %lf", &y1, &y2);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2); 

//Using the distance formula to calculate distance using the points.
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if(counter == 0){
    printf("The distance between the two points is %.3lf\n", distance);
    counter++;
    }

    return distance;
}

//Function to calculate the perimeter using the distance that was calculated earlier.
double calculatePerimeter() {
    double distance = calculateDistance(); 

    double perimeter = PI * distance;
  
    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);
    

    return 3.0;  
}


double calculateArea() {
    double distance = calculateDistance(); 
    
    double area =  PI * pow((distance / 2),2);
    
    printf("The area of the city encompassed by your request is %.3lf\n", area);
    
 
    return 4.0;  
}

double calculateWidth() {
    double x1, x2, y1, y2;

    scanf("%lf %lf", &x1, &x2);

    scanf("%lf %lf", &y1, &y2);

    double width = fabs(x2 - x1);
    printf("The width of the city encompassed by your request is %.3lf\n", width);
    
 
    return 2.0; 
}

double calculateHeight() {
    double x1, x2, y1, y2;

    scanf("%lf %lf", &x1, &x2);

    scanf("%lf %lf", &y1, &y2);
    
    double height = fabs(y2 - y1);
    printf("The height of the city encompassed by your request is %.3lf\n", height);
    

    return 3.0;  
}
