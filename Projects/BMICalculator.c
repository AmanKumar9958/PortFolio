#include<stdio.h>
#include<conio.h>
void clrscr(void);
int main()
{
    // Need -
    // age, weight(kg), height(m),

    int age;
    float weight, height, bmi, converter;
    void clrscr();

    printf("Enter You Age:\n");
    scanf("%d", &age);

    printf("Enter You Weight (KG):\n");
    scanf("%f", &weight);

    printf("Enter You Height (cm):\n");
    scanf("%f", &height);

    converter=height/100;

    bmi=weight/(converter*converter);

    printf("Your BMI is:%f\n",bmi);

    if (bmi<18)
    {
        printf("RED ZONE");
    }
    else if (bmi<25)
    {
        printf("GREEN ZONE");
    }
    else if (bmi>25)
    {
        printf("RED ZONE");
    }
    getch();
    return 0;



}