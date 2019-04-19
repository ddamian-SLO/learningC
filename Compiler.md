# Setting up the compiler for C

Since it's been a while since I've used something that required a compiler (mostly been using PowerShell and Python which are relatively 
free-form), I had to research and set it up myself. 

## Tools used
I am using the latest version of Netbeans IDE (11.0) available [here.](https://netbeans.apache.org/download/nb110/nb110.html)

I setup the compiler per Netbeans instructions [here.](https://netbeans.org/community/releases/80/cpp-setup-instructions.html)
- Cygwin was a default installation. I only downloaded the packages the documentation listed out, as it could get extremely out of hand if everything was added.
  - gcc-core: C compiler
  - gcc-g++: C++ compiler
  - gdb: The GNU Debugger
  - make: the GNU version of the 'make' utility
- MinGW was similar to Cygwin. 
  - mingw-developer-toolkit
  - mingw32-base
  - mingw32-gcc-fortran (if you will be working on Fortran programs)
  - msys-base
  - mingw32-gcc-g++

Restart Netbeans and test you can compile a C project. 
