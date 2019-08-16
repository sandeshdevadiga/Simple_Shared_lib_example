# Simple_Shared_lib_example

Hello all,
This is simple shareobjec that i created for you all to quickly get into the understanding of shared objects.
steps to build.
1> g++ -c -fPIC  myshared.cpp
2>g++ -shared -o libshared.so myshared.o
export your path to LD_LIBRARY_PATH
3>g++ -L/yourlibpath  -o main  -lshared


Please feel free to drop  your querries to 94sandesh@gmail.com
