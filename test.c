#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int *p = sbrk(0);
    p = sbrk(8);
    p = sbrk(16);
    *p = 5;
    *(p+1) = 10;
    printf("first case%p %i %i\n",p,*p,p[1]);
    int *k = sbrk(0);
    int *a = sbrk(1);
    printf("first case%p\n",p);
    p = sbrk(8);
    printf("first case%p\n",p);
}