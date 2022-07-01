#include <cs50.h>
#include <stdio.h>

int main(void){
    int x;
    int y;

    x = get_int("get answer: ");
    y = get_int("get answer: ");

    printf("%i\n",x + y);

}