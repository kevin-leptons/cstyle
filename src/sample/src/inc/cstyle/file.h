/*
SYNNOPSIS

    Control files.

    int fcopy(const char *src, const char *dest);
    int fmov(const char *src, const char *dest);
    int fdel(const char *path);

DESCRIPTION

    If "src", "dest" or "path" is directory, error will be set.

    fcopy() copy content of "src" file and put in "dest" file. If "dest"
    file is early exist, error will be set.

    fmov() change location of "src" file to "dest" file. If "dest" file
    is early exist, error will be set.

    fdel() remove file from storage.

RETURNS

    FN_OK If succeed performing.

    FN_ER If failed performing.

ERRORS

    CE_EACCES File is not exist or doesn't have enough permission.
    CE_EXITS File is early exist.

FILES

    Related files in DESCRIPTION.

EXAMPLES

    fcopy("~/.vimrc", "~/.new-vimrc") // clone new vimrc
    fmov("~/.vimrc", "/root/.vimrc") // clone vimrc file for root
    fdel("~/tmp.txt") // remove template file

BUGS

    None

AUTHOR

    Kevin Leptons <kevin.leptons@gmail.com>
    Stupid Man <stupid.man@heaven.com>
*/

#ifndef __CSTYLE_FILE_H__
#define __CSTYLE_FILE_H__

#define FN_OK 0
#define FN_ER 0

#define CE_EACCES 1
#define CE_EXITS 2

int cerror;

int fcopy(const char *src, const char *dest);
int fmov(const char *src, const char *dest);
int fdel(const char *path);

#endif
