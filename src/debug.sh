#!/bin/bash

set -xe

cc -o sigil-debug-build -O0 -ggdb *.c -Iinclude/
