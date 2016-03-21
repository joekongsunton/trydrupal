# trydrupal
Small blog to practice and learn Drupal, including Chaos tools, Features etc.

### Base Install

1. Create repo on github. Set the gitignore for drupal
2. Clone repo locally, edit the README.md to write thoses lines
3. Extract from tar or Copy a fresh drupal directory, renamed "drupal", inside the local trydrupal repo
4. Create local database (i'll name it trydrupal) for a fresh install
5. In my case, for local dev purposes, edit /etc/hosts to map 127.0.0.1 to the localdomain trydrupal.app:
```shell
    sudo nano /etc/hosts
```
 - add the line "127.0.0.1  trydrupal.app"
6. AND because i use nginx, set a new conf file in /etc/nginx/sites-available named trydrupal.app (copy from a template) with thoses changes:
 - server_name :    trydrupal.app
 - root :           /home/myusername/Code/trydrupal/drupal/ :
 - error-log :      /var/log/nginx/trydrupal-error.log error;
And make a symlink to it from /etc/nginx/sites-enabled with the command:
```shell
    sudo ln -s ../sites-available/trydrupal.app .
```
7. Reload nginx to let him know thoses changes:
```shell
    sudo nginx -s reload
```
8. Open browser and you should be able to begin drupal install on http://trydrupal.app
9. During installation, At "Choos language" if you need another one follow the instruction on the link provided "Learn how to install drupal in other languages". I did with the french translation ("drupal-7.43.fr.po copied in trydrupal/drupal/profiles/standard/translations")
10. On the next step we often encounter a rights/permissions problem, i give the ownership to the user www-data (used by my webserver) to remove this problem:
```shell
    sudo chown -R www-data:www-data trydrupal/drupal/
```
11. Next step is Databse settings, i use the previously created db "trydrupal", and also create a new user "trydrupal" with a password of my choice. be sure to make thoses infos match
12. Complete the following settings to set email and admin account for your website. Drupal is normally successfully installed at this time (it is for me)

13. Even if thoses last steps are mainly done in my local database, i'll now make my first commit with git to store local drupal files, and push it to my distant repo on github:
- add the files to staging 
```shell
    cd /Code/trydrupal/drupal
    git add *
```
- commit 
```shell
    cd /trydrupal
    git commit -m "First commit after basic installation of Drupal"
```
- "git status" now show me that my local repo is one commit further than my distant repo (origin/master)
```shell
    git status
```
- I can then push thoses change to github (my distant repo) using the commande
```shell
    git push
```
14. This ends the basic installation steps of my trial of Drupal (including basic versioning on distant repo with github), I'm now going to commit the changes in this file README.md 
```shell
    git add /home/myusername/Code/trydrupal/README.md
    git commit -m "documentation: Basic Installation steps"
```
- and push it to github:
```shell
    git push
```
