#include<stdio.h>
#include<conio.h>
void clrscr(void);
int main()
{
    int marks;
    printf("Enter Your marks : \n");
    scanf("%d",&marks);
    
    if (marks>95)
    {
        printf("Congratulations You Scored A+",marks);
    }
    else if (marks>90)
    {
        printf("Congratulations You Scored A", marks);
    }
    else if (marks>80)
    {
        printf("Congratulations You Score B",marks);
    }
    
    
    else
    {
        printf("You Score",marks);
    }
    getch();
    return 0;
}