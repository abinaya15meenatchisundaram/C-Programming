#include<stdio.h>

int main(){
    int x,equation;

    printf("Enter value of x:");
    scanf("%d",&x);

    equation=(((((3*x)+2)*x-5)*x+7)*x-6);

    printf("Equation (((((3*x)+2)*x-5)*x+7)*x-6) when value of x = %d is %d\n",x,equation);

    return 0;
}