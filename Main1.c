#include<stdio.h>

    int i;
    int j = 11;

extern int no;
int main()
{
    printf("value of i : %d\n",i);
    printf("value of j : %d\n",j);
    printf("value of no : %d\n",no);


    return 0;
}
   //gcc Main.c Helper.c -o Myexe

    //gcc Helper. Main.c c -o Myexe