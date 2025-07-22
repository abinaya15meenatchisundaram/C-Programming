#include <stdio.h>
#define FRACTION (4.0f/3.0f)
#define PI 3.14

int main(){
    int radius;
    float volume;

    printf("Enter the radius in meters: ");
    scanf("%d",&radius);

    volume=(FRACTION*PI*radius*radius*radius);

    printf("Volume of Sphere of radius %d is %.1f\n",radius,volume);

    return 0;
}
