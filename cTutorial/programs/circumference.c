#include <stdio.h>
#include <math.h>

int main(){
    
    const double PI = 3.14159;
    double radius; 
    double circumference;
    double area;

    printf("Enter the radius of a circle: \n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius,2);

    printf("Circumference is %lf\n", circumference);
    printf("Area: %lf", area);

    return 0;
}