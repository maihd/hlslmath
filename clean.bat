@echo off

rem Remove test projects
rmdir /S /Q msvc2017_test 2> nul

rem Remove .git folders
rmdir /Q /S .git       2> nul
del   /Q    .gitignore 2> nul

rem Remove this clean.bat
del /Q clean.sh 2> nul
cmd /C "del /Q clean.bat 2> nul" 2> nul