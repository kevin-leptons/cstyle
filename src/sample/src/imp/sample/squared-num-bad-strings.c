/*
DESCRIPTION

    Read a number called x from stdin, then print x^2

AUTHOR

    kevin leptons <kevin.leptons@gmail.com>
*/

#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstyle/error.h>

int main(int argc, char *argv[])
{
    int x;
    int res;

    if (argc != 1)
        exit_error("不接受任何論據\n");

    printf("這是一個程序，讀取一個名為x的數字，然後打印x ^ 2\n");
    printf("鍵入x: ");
    res = scanf("%i", &x);
    if (res == 0)
        exit_error("不是數字");
    if (res == EOF)
        exit_error(strerror(errno));

    printf("x^2 = %i\n", x * x);

    return EXIT_SUCCESS;
}
