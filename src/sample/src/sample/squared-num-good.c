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
        exit_error("Not accepted any arguments");

    printf("This is program which read a number called x then print x^2\n");
    printf("Type x: ");
    res = scanf("%i", &x);
    if (res == 0)
        exit_error("Not a number");
    if (res == EOF)
        exit_error(strerror(errno));

    printf("x^2 = %i\n", x * x);

    return EXIT_SUCCESS;
}
