#include<stdio.h>

int main()
{
   char ch = 'A';
   int i = 11;
   float f = 90.99f;
   double d = 90.88;

   char *cp = &ch;
   int *ip = &i;
   float *fp = &f;
   double *dp = &d;

   printf("%d\n",*cp); // A
   printf("%d\n",*ip); // 11
   printf("%d\n",*fp); //90.99
   printf("%d\n",*dp); //90.88

   void *vp = NULL;
   vp = &ch;
   printf("%c\n",*vp); //A

   vp = &i;
   printf("%d\n",*ip); //11
   
   return 0;
}