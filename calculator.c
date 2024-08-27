#include <stdio.h>

int add(int a, int b);
int main(void)
{
    int x=5;
    int y=4;
    printf("%i\n",add(x, y));
}
int add(int a, int b)
{
   return a+b;
}