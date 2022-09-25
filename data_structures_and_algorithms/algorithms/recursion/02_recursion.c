#include<stdio.h>

void draw(int n);

int main()
{
    draw(10);
    return 0;
}

void draw(int n)
{
    if(n <= 0)
    {
        return;
    }
    draw(n - 1);
    for(int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
