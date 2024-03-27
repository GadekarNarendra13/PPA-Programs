#include<stdio.h>
  
  struct Hello
    {
        int no;
        float d;
    };

struct Demo
{
    int i;
    float f;
};

int main()
{
    struct Demo dobj;

    printf("Size of object is : %d\n",sizeof(dobj));

    return 0;
}