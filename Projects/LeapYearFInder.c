// To find whether year is leap year or not. Taking input from the user.
#include<stdio.h>
#include<conio.h>
void clrscr(void);
int main(){
    int year;
    void clrscr();
    
    printf("Enter the Year: \n");
    scanf("%d", &year);

    if (year%4==0)
    {
       printf("The Year is leap year");
    }
    else
    {
        printf("The given year is not a leap year");
    }

    getch();
    return 0;
    
}