#include <iostream>
#include "TheLightSecretariat.h"
#include "TheLightSecretariat.cpp"
using namespace std;

int main()
{
    TheLightSecretariat LetThereBeLight;
    return 0;
}


/* PLACING CLASSES IN SEPARATE FILES

- .cpp: CPP Source file is where we are
gonna be actually building the functions
themselves.


- .h: Header file is where we are gonna be
putting all of our classes,
function prototypes and variable
declarations.

- The first thing that Bucky likes to do
is to remove private & protected access
modifiers from the header file because
he does not need any of those atm.

- Second thing he does is that he copies
the include iostream and using namespace
std from the main.cpp file and pastes
it in the newly created cpp
file.

- '::' is called the Binary Scope
Resolution Operator.

- :: indicates that the certain
constructor/function(after the second
colon) is a member of the class(before
the first colon).

- Without Binary Scope Resolution Operator,
the program wouldn't know the class to
which the function/constructor belongs in
the newly created .cpp file.

- .cpp file's gonna get compiled whenever
you intend to distribute it, while the
user shall be able to access the functions
from the header file.

- This was tons of trouble and took alot
of googling, why? Lemme tell you why.

- The linker couldn't find the reference
for the constructor function present in
the newly created .cpp file and kept throwing
the error that 'undefined reference to
class :: constructor'.

- Somehow, the linker didn't throw the same
error to bucky but did it to me and alot of
others, obvious from the comments under the tutorial.

- Consequently I googled a lot and including
the file name #include "filename.cpp" in the main
function file resolved the issue. Scroll to the top
of the code for reference.

- Have fun!

*/
