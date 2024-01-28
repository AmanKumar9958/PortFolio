//Write a program to calculate simple interest for a set of values representing principal, no of years and rate of interest.
#include<stdio.h>
#include<conio.h>
void clrscr(void);
int main()
{
    float p, r, t, i, amount;
    void clrscr();
    printf("Enter the pirncipal amount : ");
    scanf("%f", &p);

    printf("Enter the Rate : ");
    scanf("%f", &r);

    printf("Enter the Time : ");
    scanf("%f", &t);

    i=(p*r*t)/100;

    printf("The Interest : %f\n", i);

    amount=i+p;

    printf("\nThe Total Amount : %f",amount);
    getch();
}