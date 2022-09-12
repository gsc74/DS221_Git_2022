# DS221 Tutorial

## Tutorials on Git and GitHub with Prefix Sums

### Create a local repository and push to remote
```
# To create a local git repository
echo "# DS221 " >> ReadMe.md
git init
# add ReadMe.md to staging area
git add ReadMe.md
# add ReadMe.md to local repository
git commit -m "First Commit"
# add a brach main
git branch -M main
# add origin of remote repository
git remote add origin git@github.com:gsc74/DS221_Git_2022.git
# push the code to remote repository
git push -u origin main
# To switch to test branch
git checkout test
```

### Branches in a git
```
# To create a test branch
git branch test
# To switch to test branch
git checkout test
# To list all the branches
git branch
```

### Staging in a git
```
# To stage the changes of a current branch
git stage
# To restore the files corresponding to previously staged commit
git stage pop
```
