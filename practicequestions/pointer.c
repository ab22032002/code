#include<stdio.h>
int main ()
{

    int a =10;
    int *p;
    p =&a;
    printf("\n address of a == %u,%u,%u",&a,p,*(&p));
    printf("\n value of a == %d,%d,%d,%d",a,*p,*(&a),*(&p));
    return 0;
}
