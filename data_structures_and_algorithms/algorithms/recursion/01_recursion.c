#include<stdio.h>

void draw(int n);

int main()
{
    draw(4);
    return 0;
}

void draw(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// ➜  recursion git:(main) ✗ gcc -o 02_recursion 02_recursion.c && ./02_recursion
// #
// ##
// ###
// ####
// #####
// ######
// #######
// ########
// #########
// ##########
