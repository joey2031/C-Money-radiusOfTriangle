#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main(int argc, char** argv) {
    char money[] = "";
    float base;
    float height;
    float area;
    
    printf ("how much money do you have?\n");
    
    scanf ("%s", money);
    
    printf ("you have %s money in your pocket\n", money);
    
    
    printf("I now need two numbers (base and height), to calculate the area if a triangle\n");
    scanf("%f", &base);
    
    printf ("now enter the height\n");
    scanf("%f", &height);
    
    area = (base * height)*0.5;
    
    printf("Area = %f\n", area);
      printf ("Area (rounded to 2 decimal places) = %.2f\n", &area); 
    printf ("The hexadecimal number for the area is  %p\n", &area); // %p prints a pointer value in hexadecimal format.

    return (EXIT_SUCCESS);
}

