#!/bin/bash
clang++ main.cpp -o app \
  -lraylib \
  -framework OpenGL \
  -framework Cocoa \
  -framework IOKit \
  -framework CoreVideo
