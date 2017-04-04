#include <stdlib.h>
#include <stdio.h>

#include <cstyle/struct.h>
#include <cstyle/enum.h>
#include <cstyle/valid-typedef.h>
#include <cstyle/invalid-typedef.h>

int main(int argc, char *argv[])
{
    printf("sizeof(iprim_t)=%i\n", sizeof(iprim_t));
    return EXIT_SUCCESS;
}
