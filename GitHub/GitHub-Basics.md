# GitHub basics 

BASIC COMMANDS & TERMS :
- git init
- git add
- git commit
- git push
- git status 
- git clone
- git pull
- Directory - Folder
- Termminal/Command Line - Interface for text commands
- CLI - Command Line Interface
- Repository - a Project, or the folder having project.
- README FILE - Contains the description of project
- origin - set location for Git repo
- master - branch where we want to push

# IMPORTANT 

- git push origin master - works only when connection established
- git remote add origin "link" - helps establish the above connection needed
- git remote -v 
- git push -u origin master

1. Git is used for version control i.e. the management of changes to documents, computer programs, large websites, etc.
2. GitHub is the platform to store all the changes made, file updates and repositries operations.
3. mkdir - creates
4. ls - lists things inside
5. cd - change directory 
6. all history is saved in .git and are hidden, can be accessed by (git:(master) ls -a)
7. touch(in linux)/ni(in terminal) - creates new file
8. git status - to know the changes made, what's changed in the current version
9. untracked files - whhose history han't been saved yet
10. git add . - dot adds all the things or files that haven't been registered in history yet
11. -m - provides a msg
12. add - adds file to the staging(execution) area
13. cat -- helps to get Content
14. remove --staged - used to unstage files from staging area
15. rm -rf (in linux)/ rm (in powershell) - to delete file 
16. to undo a commit, you cant straightaway delete it from anywhere - copy a commit and then write git reset "id" which deletes all the commits above it. This also means, that we unstaged a staged commit
17. git stash - saves working dir in order to be used later on when needed, just keeps them logged in the history
18. git stash pop - brings those changes in stage
19. git remote add origin - to add the urls of the current working repo 
20. git remote -v - shows all the URLs attached to the folder
21. push - shares and pushes the changes into the origin
22. what are BRANCHES?  -  the number of commits made are in the form of directed acyclic graph one upon other, resulting in a branch
23. seperate branch to be made for every new feature
24. NEVER COMMIT ON THE MAIN BRANCH TO KEEP THE USERS UNAFFECTED
25. HEAD - pointer which says all the new features added would be added in the head pointing on feature branch
26. MORE AND MORE BRANCHES CREATED FOR SIMULTANEOUS CHANGES TO BE FETCHED FROM MULTIPLE USERS WORKING AT THE SAME TIME
27. to make chanes in an already existing repo, we make a copy of it rather than editinng the original repo - by FORKthe url of the original repo from where we fork the project
28. git remote add upstream url - 
29. git clone <url> - makes a local copy of the project on desktop
30. if want to add a change, i.e. own code in the main branch of some other organisation's repo- you suggest some changes through the "PULL REQUEST" option which is then reviewed and merged with their main file if it looks fine to them
31. BRANCH & make PR
git branch arya
git checkout arya
git add .
git commit -m "Arya added a message"
git push origin arya
32. if a branch already has a PR associated to it, it wont allow a new one to be made and increment number of commits by 1.
33. FORCE PUSH (by- git push origin branch -f) when online repo contains a commit that my local repo does not
34. HOW TO MAKE SURE THAT MAIN BRANCH OF UPSTREAM AND OWN FORK'S MAIN BRANCH IS MAINTAINED?
git fetch --all --prune
35. git pull upstream main branch - 1 command to do everything pull the code and submit
36. if a lot of commits to be merged into one commit 
git rebase -i (interactive env) 
pick & s (squashed into one which is picked)
:x (exit)
37. MERGE CONFLICTS
concurrent changes on same line need help to decide which modification is to be tkaen as final in the line
take whtvr you want to take, merge the PR and resolve conflict selected
