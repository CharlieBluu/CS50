@echo off
cd /d "c:\Users\charl\Desktop\Starter code PC\Starter-code"
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
cl -Zi mario.c
