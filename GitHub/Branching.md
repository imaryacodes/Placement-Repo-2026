# GIT BRANCHING

- git commit -am - adds and commits simultaneously in the code file which is MODIFIED, NOT FOR NEWLY CREATED FILES
- git stash - to store in unstaged area for the time being it's not needed


1. master branch - main/default branch

2. feature branch - updates made here stay here only, dont reflect on master, and vice-versa

3. HELPFUL - Because there might be certain changes that we might not want to reflect on the main branch but want to store in the repo for some future use. So the changes not being updated in the main branch is a benefit when multiple users are working on the repo.

4. Hot Fix branch - created to fix a major bug

5. git branch - returns current branch with green and others below that exist
6. git checkout -b feature - switch between branches
7. git diff "branch" - shows what changes have been made and shows all lines that have been changed
8. git merge "branch"


# PULL REQUESTS

- A request to have your code pulled into the master branch
- Once PR is pulled, we delete the feature branch and switch to master branch
- Compare aand pull
- In the write section, can describe the changes made and PR created
- comments can be made for different lines of code
- resolving conversations if needed
- Merge the PR, now you're on master branch in Git
- now git pull and file updated locally
- git branch -d "branch" - deletes the branch


# MERGE CONFLICTS

- concurrent writing of code on a branch by multiple users, where git needs to decide which change to confirm to occur
- git merge master 
- easiest way to accept changes in code editor
