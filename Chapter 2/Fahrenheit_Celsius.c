#include <stdio.h>

#define FREEZINF_POINT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main(){
    float fahrenheit,celsius;

    printf("Enter the Fahrenheit: ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - FREEZINF_POINT)*SCALE_FACTOR;

    printf("Celsius : %.1f\n",celsius);

    return 0;
}
