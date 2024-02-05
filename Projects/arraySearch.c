// Program for linear search
#include<stdio.h>
#define MAX 100
int main()
{
    int a[MAX], i, j, n, x, f=0;
    printf("Linear Search");
    printf("\n Enter the size of array");
    scanf("%d", &n);

    printf("\n Enter elements of the list");
    for (i = 0; i <n; i++)
    scanf("%d", & a[i]);
    printf("\n Enter the element to be search");
    scanf("%d", &x);
    for (j=0; j<n; j++)
        {
            if (a[j]==x)
                {
                    f=1;
                    break;
                }
        }
        if (f==1)
            {
                printf("\n Element is present at %d position", j+1);
            }
        else
            {
                printf("\n Element is not in list");
            }   
getch();
}