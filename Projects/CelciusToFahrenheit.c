//Write a program to convert Celcius degrees to Fahrenheit.
#include<stdio.h>
#include<conio.h>
void clrscr(void);
int main()
{
    float _c, _f;
    void clrscr();
    printf("Enter the temperature in Celcius : ");
    scanf("%f",&_c);

    _f=(9/5)*_c+32;

    printf("The Temperature in Fahrenheit : %f",_f);
    getch();
    return 0;
}