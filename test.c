#include <stdio.h>

int add(int x, int y);

int main()
{
    printf("hello world\n");
    printf("sum is: %d\n", add(100, 20));
    return 0;
}


int add(int x, int y)
{
    int a = 10l, b = 20;
    int c = add(a, b);
    printf("c: %d\n", c);
    return (x) + (y);
}
