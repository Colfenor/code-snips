
// a short test script to get an idea
// of memory Adress randomization

// try to compile the source code with
// 'gcc -o test test_addresses.c -Wall -no-pie'
// to disable position independent execution
// and without the '-no-pie' compile flag to see the difference
// in address randomization

#include<stdio.h>
#include<stdlib.h>

char shellcode[128]; // global char buffer variable

int main()
{
    int b = 0; // a local variable
    int* a = (int*)malloc(sizeof(int)); // a local pointer variable
    if (a == NULL)
    {
        printf("malloc failed to allocate memory");
        return 1;
    }

    printf("shellc: %p ,\n b = %p ,\n a = %p ,\n", &shellcode, &b, &a);

    free(a);
    return 0;
}
