#include <stdio.h>

int main(){
    float amount,tax;

    printf("Enter the amount: ");
    scanf("%f",&amount);

    tax=amount+(amount*0.05);
    printf("Tax Amount: %.2f\n",tax);

    return 0;
}