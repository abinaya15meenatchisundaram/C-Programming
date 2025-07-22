#include <stdio.h>

int main(){
    int x,x2,x3,x4,x5,equation;

    printf("Enter X:");
    scanf("%d",&x);

    x2=x*x;
    x3=x*x*x;
    x4=x*x*x*x;
    x5=x*x*x*x*x;


    equation = ((3*x5)+(2*x4)-(5*x3)-(x2)+(7*x)-6);
    printf("3x^5+2x^4-5x^3-x^2+7x-6 is %d\n",equation);

    return 0;
}