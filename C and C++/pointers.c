#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    int **q;
    q=&p;
    printf("q is(pointer adress of p)---------> %d\n",q );
    printf("a=%d\n Deref value *p =%d\n address of pointer =%d\n address of a=%d", a, *p, &p, p);
    // printf("a =%d\n", a);
    // printf("address of A = %d\n", p);
    // *p = 200;
    // printf("new a =%d\n", a);
    // int b = 55;
    // *p = b;
    // printf("A =%d\n", a);
    // printf("address of p is %d\n", p);
    //int x=&p;
    //printf("x = %d\n", x);
    //printf("address of x is %d\n", );
    //printf("value at p is %d\n", *p);
    // char *p0;
    // p0=(char)p;


    return 0;
}