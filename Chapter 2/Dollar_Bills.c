#include<stdio.h>

int main(){
    int amount,bill20, bill10, bill5, bill1;

    printf("Enter a dollar amount: ");
    scanf("%d",&amount);

    bill20=(amount/20);
    amount=amount-(bill20*20);
    printf("$20 Bills: %d\n",bill20);

    bill10=(amount/10);
    amount=amount-(bill10*10);
    printf("$10 Bills: %d\n",bill10);

    bill5=(amount/5);
    amount=amount-(bill5*5);
    printf("$5 Bills: %d\n",bill5);

    bill1=amount;
    printf("$1 Bills: %d\n",bill1);

}