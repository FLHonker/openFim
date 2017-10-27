#!/bin/sh  
# 将ldd打印出来的依赖库复制到指定路径
exe="openFim" #发布的程序名称  
des="/home/flubuntu/Documents/Work/QtCode/build-openFim-Desktop-Release/soNeed" #你的路径  
  
deplist=$(ldd $exe | awk  '{if (match($3,"/")){ printf("%s "),$3 } }')  
cp $deplist $des  
