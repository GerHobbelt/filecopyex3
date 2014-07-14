@echo off
@setlocal

set FAR_VERSION=Far3
set PROJECT_ROOT=%~dp0
set BUILD_COMPILER=MSVC

set PROJECT_CONFIG=Release
set PROJECT_BUILD=Build

if "%1" == "" goto x86
if "%1" == "x64" goto x64
goto x86

:x64
set PROJECT_PLATFORM=x64
set PROJECT_CONF=x64
set PROJECT_GEN=NMake Makefiles
set PROJECT_VARS=x86_amd64

call %~dp0\build_filecopyex3.cmd


goto end

:x86
set PROJECT_PLATFORM=Win32
set PROJECT_CONF=x86
set PROJECT_GEN=NMake Makefiles
set PROJECT_VARS=x86

call %~dp0\build_filecopyex3.cmd

goto end

:end

@endlocal
