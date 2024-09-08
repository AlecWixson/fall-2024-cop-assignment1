//********************************************************
// fracturing.c
// Author: Alec Wixson
// Class: COP 3223, Professor Parra
// Purpose: This program asks for two points in 2D
// space and performs a variety of calculations
// for city dimensions
// Input: User input in the form of doubles
//
// Output: A print statement summarizing the user
// input and the calculated value 
// //********************************************************

// Established required libraries for program and define 
// constant pi
#include <stdio.h>
#include <math.h>
#define PI 3.14159
// Declare each of the functions and the type of input 
double calculate_distance();
double calculate_perimeter();
double calculate_area();
double calculate_width();
double calculate_height();
double ask_for_user_input(); // Optional
// Main program that executes functions in order
int main(int argc, char **argv) {
   

    // Calls all of the functions and stores each result
    double distance = calculate_distance();
    double perimeter = calculate_perimeter();
    double area = calculate_area();
    double width = calculate_width();
    double height = calculate_height();
    // After all functions have been called- lists all calculations
    printf("\nAll Calculations\n");
    printf("Distance: %.2f\n", distance);
    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);
    printf("Width: %.2f\n", width);
    printf("Height: %.2f\n", height);

    return 1;  
}
// Function calculates distance between two points
double calculate_distance() {
    double x1, y1, x2, y2;

    // Prompts the user for input and takes that input
    // for first coordinates
    printf("Enter x1 and y1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2: ");
    scanf("%lf %lf", &x2, &y2);

    // Prompts the user for input and takes that input
    // for second coordinates
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    // Perform the operation using the distance formula
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

double calculate_perimeter() {
    double distance = calculate_distance();
    
    // Perimeter is calculated by circumference
    double perimeter = PI * distance; // Circumference = π * diameter
    printf("The perimeter (circumference) of the city encompassed by your request is %.2f\n", perimeter);
    
    return 2.0; // Return the difficulty rating
}
// Fucntion calculates the area of a circular city
double calculate_area() {
    double distance = calculate_distance();
    
    // Area using πr^2, where r = distance/2
    double radius = distance / 2;
    double area = PI * pow(radius, 2); // Area = π * r^2
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 3.0; // Return the difficulty rating
}
// Calculates width based on distance
double calculate_width() {
    double distance = calculate_distance();

    // Imply width is equal to distance
    double width = distance;
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 2.0; // Return the difficulty rating
}
// Calculate height based on distance
double calculate_height() {
    double distance = calculate_distance();

    // Imply height is equal to distance
    double height = distance;
    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 2.0; // Return the difficulty rating
}

// Optional function
double ask_for_user_input() {
    double input;
    printf("Please enter a value: ");
    scanf("%lf", &input);
    return input;
}