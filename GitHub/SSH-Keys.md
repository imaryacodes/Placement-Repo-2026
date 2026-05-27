# Need for SSH-Keys

- In order to push the changes, we need to reassure that we're the owner of the account by connecting local machine to Github account.

1. ssh-keygen -t rsa -b 4096 -C "login_email_add" 
- first term is for local key generation
- type of encryption specified by -t
- strength of encryption 
- add the end, include Github email address

2. Default file for SSH Key is inside the user directory in dot SSH directory, known as ID_rsa

3. Hit enter and key is generated

4. 2 keys generated

5. Key generated without 'pub' extension is the Private Key not to be shared. The other one is public.

6. In Settings, SSH and GPG keys selected an we ad new ssh key by pasting what was generated. 

7. TO MAKE SURE GITHUB KNOWS THAT KEY WAS GENERATED,
SSH Agent is started, add the text from ssh keys page to code in order to modify config to automatically load keys into ssh-agent and store paraphrases in keychain.

8. ssh add cmd is run which sets key to work with Git.