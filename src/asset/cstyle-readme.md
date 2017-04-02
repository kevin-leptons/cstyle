# CSTYLE

![cstyle](../img/cstyle-64.png)

One direction guide for C language coding

Kevin Leptons <kevin.leptons@gmail.com> <br>
CC by 4.0 License <br>
March, 2017

# FEATURES

- Specify C coding standard
- Developers are easy to thinking
- Code is easy to write
- Code is easy to read

# USAGE

```bash
# download pre-build packages from this directory
# https://github.com/kevin-leptons/cstyle/tree/master/dist

# assume downloading version 0.1.0
wget https://github.com/kevin-leptons/cstyle/tree/master/dist/cstyle-0.1.0.tar.gz
tar -xf cstyle-0.1.0.tar.gz
cd cstyle-0.1.0

# view
evince cstyle-0.1.0.pdf
```

Full document: https://github.com/kevin-leptons/cstyle/doc/usage.md

# DEVELOPMENT

```bash
# all of instruction below are affected by Debian-like system
# if your system isn't Debian-like, use other package manager and suitable
# packages

# install tools
apt-get install texlive-xetex texlive-generic-extra evince

# option tools
# required if you modify image "src/img/*.svg"
apt-get install inkscape

# clone source
git clone https://github.com/kevin-leptons/cstyle
cd cstyle

# modify source files 'src/*.tex'
# ...

# if modify image "src/img/*.svg", re-generate images
./ctl resource

# build then view result
./ctl run

# or only build
# files in various format are builds
# put in 'dest'
./ctl build

# or only view result
./ctl view

# distribute
# files in various format are compress
# put in 'dist/cstyle.tar.gz'
./ctl dist

# clean build files
./ctl clean
```
Full document:
https://github.com/kevin-leptons/cstyle/doc/dev.md

# REFERENCES

[cstyle-start](https://github.com/kevin-leptons/cstyle-start)
an - sample project use `cstyle`
