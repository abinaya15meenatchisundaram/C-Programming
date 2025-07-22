#include <stdio.h>
#define FRACTION (4.0f/3.0f)
#define PI 3.14
int main(){
    int radius =10;
    float volume;

    volume=(FRACTION*PI*radius*radius*radius);

    printf("Volume of sphere : %.1f\n",volume);

    return 0;

    
}