set d=%date:~0,10%
set t=%time:~0,8%
set times=%d% %t%

echo current directory:%cd%
git status 
git add .
git commit -m "%times%"
git push origin master
exit