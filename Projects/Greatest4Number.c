#include<stdio.h>
#include<conio.h>
void clrscr (void);
int main(){
    int num1, num2, num3, num4;
    void clrscr();

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    printf("Enter 3rd number: ");
    scanf("%d", &num3);

    printf("Enter 4th number: ");
    scanf("%d", &num4);

    if (num1>num2 || num1>num3 || num1>num4)
    {
        printf("Greatest number is %d", num1);
    }
    else if (num2>num3|| num2>num4)
    {
        printf("Greatest number is %d", num2);
    }
    else if (num3>num4)
    {
        printf("Greatest number is %d", num3);
    }
    else{
        printf("Greatest number is %d", num4);
    }
    getch();
    return 0;
}