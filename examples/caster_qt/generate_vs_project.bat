:: Disable output
@echo off

:: Clear the screen
cls

:: Generate project with visual studio env (necessary if multiple VS installations available)
set BatDir=%~dp0

:: Force 64-bit project (check if vs143 or vs142 or vs140 path is set for vcvarsall)
if exist "%VS143COMNTOOLS%" cd /D %VS143COMNTOOLS%
if not exist "%VS143COMNTOOLS%" if exist "%VS142COMNTOOLS%" cd /D %VS142COMNTOOLS%
if not exist "%VS143COMNTOOLS%" if not exist "%VS142COMNTOOLS%" if exist "%VS140COMNTOOLS%" cd /D %VS140COMNTOOLS%\..\..\VC\

call vcvarsall amd64
cd /D %BatDir%

if %1.==. generate_vs_project caster.pro
if %1.==/dontwait. generate_vs_project caster.pro /dontwait

:: If a parameter was given, create a Visual C project from that file.
echo Creating Visual C project from %1...
qmake -spec win32-msvc -tp vc -r %1

:: Wait for the user to press any key...
if %2.==. pause