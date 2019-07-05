#include <stdio.h>

int main(void)
{
    char back_slash = 0x5C;
    char under_bar  = '_';
    char vertical_bar = '|';
    char ddaom = '"';
    char triangle = '^';
    printf("|%c%c/|\n",back_slash,under_bar);
    printf("|q p|   /}\n");
    printf("( 0 )%c%c%c%c\n",ddaom,ddaom,ddaom,back_slash);
    printf("|%c%c%c`    |\n",ddaom,triangle,ddaom);
    printf("||_/=%c%c__|\n",back_slash,back_slash);
}
