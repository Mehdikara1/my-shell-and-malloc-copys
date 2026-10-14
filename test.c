#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int *p = sbrk(0);
    /*p = sbrk(16);
    p = sbrk(0);
    p = sbrk(1);
    p = sbrk(8);*/
    printf("first case%p\n",p);
}