#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int score[3];

    score[0] = get_int("what is the score:");
    score[1] = get_int("what is the score: ");
    score[2] = get_int("what is the score: ");
    
    printf("avarage: %f\n",(score[0]+score[1]+score[2])/3.0);
}