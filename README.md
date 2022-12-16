# Custom-DLL-Loader
Compile Custom Dynamic Library (DLL) &amp; DLL Loader in C++

Compiling the dll : 
```bash
# Make object file
gcc -c main.c 
# Make dll file from object file instructions
gcc -shared -o main.dll main.o
```

Compiling the loader :
```bash
g++ DLL-LOADER.cpp -o DLL-LOADER.exe
```

@34ZY
