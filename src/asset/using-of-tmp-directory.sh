# go to package directory
cd package

# case 1: build and put message into log file
./ctl build &> tmp/build.log

# case 2: view other packages
tar -xf other-packge.tar.gz --directory tmp
ls tmp/other-package
