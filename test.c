#include <stdio.h>

int add(int x, int y);
int minus(int x, int y);

int main()
{
    printf("hello world\n");
    printf("sum is: %d\n", add(100, 20));
    return 0;
}


int add(int x, int y)
{
    return (x) + (y);
}

int minus(int x, int y)
{
    return (x) - (y);
}

