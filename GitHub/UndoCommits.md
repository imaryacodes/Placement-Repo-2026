# UNDO COMMITS

1. for STAGED changes:
- done for unstaging
- git reset "filename"
- git reset

2. for COMMITTED changes:
- SINGLE CHANGE -> git reset HEAD - head is the pointer pointing on the last commit which goes back to the last change

- MULTIPLE CHANGES ->
-- to back to a certain commit, in the log of commits, copy the hash of the wanted commit  and then 
"git reset hashvalue"
-- git reset --hard - to get rid of all the changes that were done for testing purpose only