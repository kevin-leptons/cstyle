#include <cstyle/error.h>

#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void exit_error(const char *message)
{
    fprintf(stderr, "Error: %s\n", message);
    exit(EXIT_FAILURE);
}
