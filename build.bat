@echo off

echo begin build

::���Ը����Լ���vs�޸����������
cmake G"Visual Studio 14 2015" "Win64" -B .\build -S .\
cmake --build .\build --config "release"

echo done
