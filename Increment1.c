#include<stdio.h>

//postincrement
int main()
{
    int i = 10;
    int No = 0;

    No = i++;

    printf("%d\n",No);
    printf("%d\n",i);

    return 0;
}