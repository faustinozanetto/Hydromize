@echo off
pushd %~dp0\..\
call ThirdParty\Premake\Binaries\premake5.exe vs2022
popd
PAUSE