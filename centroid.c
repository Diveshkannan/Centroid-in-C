#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = get_int("Height: ");
    for (int row = 1; row <= height; row++)
    {
        //left spaces
        for (int left_space = 1; left_space <= height - row; left_space++)
        {
            printf(" ");
        }
        //left hashes
        for (int left_hash = 1; left_hash <= row-1; left_hash++)
        {
                 printf("?");
        }
        //centre hashes
        printf("?");
        //right hashes
        for(int right_hash=1;right_hash<=row-1;right_hash++)
        {
             printf("?");
        }
        //move to the next line
        printf("\n");
    }
}
