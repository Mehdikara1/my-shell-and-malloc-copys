#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void *my_alloc(size_t size);

int main(void)
{
    int *a = my_alloc(sizeof(int));
    printf("%p\n",a);
    return 0;
}

void *my_alloc(size_t size)
{
    void *ptr = sbrk(size);
    return ptr;
}