/*
SYNNOPSIS

    Control files.

    file copy <src> <dest>
    file move <src> <dest>
    file del <file>

DESCRIPTION

    If <src> <dest> or <file> is directory, operation will be terminate.

    copy command copy file from <src> to <dest>. If <dest> file is exist,
    operation will terminate.

    move command change file location from <src> to <dest>. If <dest> file is
    exist, operation will terminate.

    del command remove file from storage.

RETURNS

    0 Succeed.
    1 Failed.

FILES

    Related file in DESCRIPTION section.

EXAMPLES

    # clone new vimrc file
    file copy ~/.vimrc ~/.new-vimrc

    # move file
    file move ~/.new-vimrc ~/.old-vimrc

    # remove file
    file del ~/.old-vimrc

BUGS

    None

AUTHOR

    Kevin Leptons <kevin.leptons@gmail.com>
    Stupid Man <stupid.man@heaven.com>
*/

#include <stdlib.h>
#include <stdio.h>

#include <cstyle/file.h>
#include <cstyle/error.h>

int main(int argc, char *argv[])
{
    return EXIT_SUCCESS;
}
