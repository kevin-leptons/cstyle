# add file into .gitignore file
echo file >> .gitignore

# remove files
git rm --cached file

# or remove directories
git rm --cachged -r directory

# commit changes
git commit -am "remove unpredicted files"