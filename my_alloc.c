#define _DEFAULT_SOURCE

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

#define MAX _Alignof(max_align_t)-1

void *my_alloc(size_t size);

int main(void)
{
    void *place_holder = sbrk(1);
    place_holder = sbrk(10);
    //printf("before %p \n",place_holder);
    int *a = my_alloc(256);
    printf("%p\n",a);
    uintptr_t ptr_value = (uintptr_t)a;
    printf("this is a num 0x%lx \n",ptr_value);
    unsigned long int bound = (ptr_value+15) & ~15;
    printf("0x%lx\n",bound);
    bound = bound % 16;
    printf("%lu \n",bound);
    return 0;
}

void *my_alloc(size_t size)
{
    void *ptr = sbrk(0);
    uintptr_t pad = (uintptr_t)ptr;
    pad = (pad+MAX) & ~MAX;
    ptr = (void *)pad;
    ptr = sbrk((size+MAX) & ~MAX);
    return ptr;
}