#include<stdio.h>

int main()
{
    // loop counter
    int i = 0;
    int count = 0;

    printf("Enter number of times you want to display Jay Ganesh on screen\n");
    scanf("%d",&count);

    //   1       2      3
    for(i = 1; i <= count; i++)
    {
        printf("Jay Ganesh...\n"); //4
    }

    return 0;
}