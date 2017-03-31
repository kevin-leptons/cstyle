#!/bin/bash

# SPEC      : controller of repository
# AUTHOR    : kevin.leptons@gmail.com

# bash options
set -e

# variables
VERSION="0.1.0"
ROOT=$(realpath .)
SRC="$ROOT/src"
DEST="$ROOT/dest"
DIST="$ROOT/dist"
PACK="$ROOT/pack"
DOC_NAME="cstyle"
PACKAGE="$DOC_NAME-$VERSION"

# help menu
HELP="USAGE:\n
    $(basename $0) resource     generate resource
    $(basename $0) build        build repo
    $(basename $0) dist         build distribution
    $(basename $0) install      install repo
    $(basename $0) clean        clean build
    $(basename $0) remove       remove repo
    $(basename $0) -h           show help menu\n"

repo_build()
{
    # prepare
    mkdir -vp $DEST
    cd $SRC

    # build pdf
    xelatex -jobname $DOC_NAME -output-directory $DEST $SRC/main.tex \
        -halt-on-error

}

repo_resource()
{
    local LOGO_SVG=$SRC/img/cstyle.svg
    local LOGO_DEST_TMP=$SRC/img/cstyle

    # export various size of pictures
    inkscape -z $LOGO_SVG -e $LOGO_DEST_TMP-64.png -w 64 - h64
    inkscape -z $LOGO_SVG -e $LOGO_DEST_TMP-128.png -w 128 -h 128
    inkscape -z $LOGO_SVG -e $LOGO_DEST_TMP-256.png -w 256 -h 256
    inkscape -z $LOGO_SVG -e $LOGO_DEST_TMP.png -w 2048 -h 2048
}

repo_dist()
{
    local TMP_DIR=$PACKAGE
    local PKG_COM="$DOC_NAME.tar.gz"
    local PKG_DIST="$DIST/$PACKAGE.tar.gz"

    if [ ! -d $DEST ]; then
        repo_build
    fi

    # prepare
    mkdir -vp $DIST $PACK/$TMP_DIR
    cp $DEST/$DOC_NAME.pdf $PACK/$TMP_DIR/$PACKAGE.pdf
    cd $PACK

    # compress
    tar -zcvf $PKG_COM -C $PACK $TMP_DIR
    cp $PKG_COM $PKG_DIST
}

repo_install()
{
    echo "not implemented"
    exit 1
}

repo_clean()
{
    rm -rfv $DEST $PACK
}

repo_remove()
{
    echo "not implemented"
    exit 1
}

show_help()
{
    printf "$HELP"
}

# parse arguments
case "$1" in
    resource) repo_resource; exit 0;;
    build) repo_build; exit 0;;
    dist) repo_dist; exit 0;;
    install) repo_install; exit 0;;
    clean) repo_clean; exit 0;;
    remove) repo_remove; exit 0;;
    -h) show_help; exit 0;;
    *) show_help; exit 1;;
esac
