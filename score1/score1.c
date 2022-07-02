#include <stdio.h>

int main(void)
{
    int score[3];

    score[0] = 65;
    score[1] = 47;
    score[2] = 86;
    printf("avarage: %f\n",(score[0]+score[1]+score[2])/3.0);
}