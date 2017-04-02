# C STANDARD CODING STYLE

One direction guide for C language coding

Kevin Leptons <kevin.leptons@gmail.com> <br>
March, 2017
CC by 4.0 License

![cstyle](src/img/cstyle-64.png)

# DESCRIPTIONS

Cstyle provide only-instruction per problem of C language coding. In there,
not thing which called should, should not, exception or some things like that.
With problem, you have only way to solve that. That mean two
keywords are provided MUST and MUST NOT.

And benefits are

- Developers are easy to thinking
- Code is easy to write
- Code is easy to read

# QUICK START

Specification was built to PDF format and putted to [dist](dist/)

# DEVELOPMENTS

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

Version control system:
[https://github.com/kevin-leptons/cstyle](https://github.com/kevin-leptons/cstyle) <br>
Issues tracker: [https://github.com/kevin-leptons/cstyle/issues](https://github.com/kevin-leptons/cstyle/issues) <br>
Email: <kevin.leptons@gmail.com>

# REFERENCES

[cstyle-start](https://github.com/kevin-leptons/cstyle-start)
an - sample project use `cstyle`
