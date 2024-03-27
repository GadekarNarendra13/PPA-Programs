#include<stdio.h>

void Display()
{
    register int no = 11;  // internally store auto int no = 11;
    register int i;  // internally store auto int i;
    

    printf("value of no : %d\n",no);
    printf("value of i : %d\n",i);
}

int main()
{
    Display();

   // printf("%d",no);

    return 0;

}