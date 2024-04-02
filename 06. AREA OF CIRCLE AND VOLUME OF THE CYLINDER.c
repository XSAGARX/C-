//Calculate the area of a circle and modify the same program to calculate 
// the volume of a cylinder given its radius and height.

#include <stdio.h>
int main (){
    //Area of circle formula = pi*r^2 
   int radius = 5;
   float pi = 3.14;
   printf("the area of circle is %f\n", pi*radius*radius);
   int height = 4;
   printf("Volume of the cylinder is %f\n", pi* radius * radius * height);
   return 0;
    
}