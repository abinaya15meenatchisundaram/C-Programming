#include<stdio.h>

/*Reading Inputs from the user*/

int main(){
    int height,length,width,volume,weight;

    printf("Enter the height: ");
    scanf("%d",&height);
    printf("Enter the length: ");
    scanf("%d",&length);
    printf("Enter the width: ");
    scanf("%d",&width);

    volume=height*length*width;
    weight=(volume+165)/166;

    printf("Volume: %d\n",volume);
    printf("Weight: %d\n",weight);

    return 0;

}