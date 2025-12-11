#!/bin/bash

echo "Building static library..."
cd static_lib
g++ -c mylib.cpp -o mylib.o -std=c++11
ar rcs libmymath.a mylib.o
cd ..

echo "Building dynamic library..."
cd dynamic_lib
g++ -c dynamiclib.cpp -o dynamiclib.o -fPIC -std=c++11
g++ -shared dynamiclib.o -o libmymathdynamic.so
cd ..

echo "Building application..."
cd app
g++ main.cpp -I../static_lib -I../dynamic_lib -L../static_lib -L../dynamic_lib -lmymath -lmymathdynamic -o myapp -std=c++11 -Wl,-rpath='$ORIGIN/../dynamic_lib'
cd ..

echo "Done! Run with: ./app/myapp"