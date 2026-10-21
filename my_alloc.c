#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

void *my_alloc(size_t size);

int main(void)
{
    void *place_holder = sbrk(1);
    place_holder = sbrk(10);
    int *a = my_alloc(sizeof(int));
    printf("%p\n",a);
    uintptr_t ptr_value = (uintptr_t)a;
    printf("this is a num 0x%lx \n",ptr_value);
    unsigned long int bound = (ptr_value+15) & ~15;
    printf("0x%lx\n",bound);
    return 0;
}

void *my_alloc(size_t size)
{
    void *ptr = sbrk(size);
    uintptr_t pad = (uintptr_t)ptr;
    pad = (pad+15) & ~15;
    ptr = (void *)pad;
    return ptr;
}