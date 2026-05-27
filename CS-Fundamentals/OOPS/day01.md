#HOW C++ CODE RUNS

1. Source code - saved using '.cpp'
2. COMPILER 
- helps in preprocessing source code
- responsible for checking syntax/semantic/logical errors.
- changes to ''.obj' or '.o' file
3. Linking occurs to integrate definitions of multiple files 
4. Machine code is ready in '.exe' format (0,1)
5. After execution, output is reflected



#STRUCTURE OF C++ PROGRAM

#include <iostream>       // includes library having different files
using namespace std;      // using standard library to remove naming conflicts

int main() {              // program starts here
                          // collection of logical statements
    return 0;             // success is returned by returning 0, else error gives some other value
}


#VARIABLES

- Labeled container in memory which stores data that can be used by the program.
- Data type to be mentioned, is necessary.
- Data can be changed, i.e. it varies.
- Variables are case-sensitive.
- Variable names can't be a C++ Keyword.


#DATA TYPES

- 1 byte = 8 bits
- size range = 2^n bits
- Primitive : defined in CPP, [int(4), float(4), double(8), char(1), bool(1)]
- Non-Primitive : user defined data type, built by a combination of primitives


#INPUT/OUTPUT

- cin : input from users using 'cin >>'
- cout : output by system using 'cout <<'
- input goes into the internal buffer (RAM), which then gets stored in output variable