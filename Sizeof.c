#include<stdio.h>

int main()
{
   char ch = 'A';
   int i = 21;
   float f = 12.31f;
   double d = 89.90;

   printf("Size of character is : %d bytes\n",sizeof(ch));
   printf("Size of integer is : %d bytes\n",sizeof(i));
   printf("Size of float is : %d bytes\n",sizeof(f));
   printf("Size of double is : %d bytes\n",sizeof(d));

  // printf("Base address of character is : %d\n",&ch);
   //printf("Base address of character is : %d\n",&i);
   //printf("Base address of character is : %d\n",&f);
   //printf("Base address of character is : %d\n",&d);

   printf("Base address of character is : %u\n",&ch); //%u stand for unsigned modifier
   printf("Base address of character is : %u\n",&i);
   printf("Base address of character is : %u\n",&f);
   printf("Base address of character is : %u\n",&d);

   return 0;

}