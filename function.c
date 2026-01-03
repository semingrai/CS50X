#include <cs50.h>
#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(3);
}
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
//input
#include <cs50.h>
#include <stdio.h>

void meow(int times);

int main(void)
{
    int n = get_int("What's n?");
    meow(n);
}
void meow(int times)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
