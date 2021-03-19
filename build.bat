@echo off

echo begin build

::可以根据自己的vs修改下面的配置
cmake G"Visual Studio 14 2015" "Win64" -B .\build -S .\
cmake --build .\build --config "release"

echo done
