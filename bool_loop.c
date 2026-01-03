#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("X : ");
    int y = get_int("y : ");

    if (x < y)
    {
        printf("x is less than y \n");
    }
    else if (x >y)
    {
        printf("x is not less than y \n");
    }
    else
    {
        printf("x and y is equal \n");
    }
}

int i = 0;
while (i < 3)
{
    printf("meow\n");
    i++;
}

for (int i = 0; i<3; i++)
{
    printf("meow\n");
}
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    do
    {
        n = get_int("What's n? ");
    }
    while (n<0);

    for (int i = 0; i<n; i++)
    {
        printf("meow\n");
    }
}


