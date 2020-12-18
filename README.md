# dr_opt

A simple C++ getopt component
<br /><br /><br />

## Description
---
dr_opt is a command options parser (similar to the most basic functionality of getopt.h) that I can use between multiple platforms. *argc* and *args* must be provided to *setopt* before using the other functions.

### Functions
*void setopt(int argc, char\* args[]);*
<br />
Used to format all incoming command line option data.
<br /><br />
*bool hasopt(const std::string& flag);*
<br />
Used for checking if an option was provided on the command line.
<br /><br />
*const std::string& getopt(const std::string& flag);*
<br />
If an option is accompanied by a string parameter, then that parameter is returned. Returns "" otherwise.
<br /><br />

## Getting Started
---
### Test Limitations
* premake5
* batch and bash scripts create vs2019 (Solution) and gmake2 (Makefile) files respectfully

### Installing
* Copy the dr_opt header and source file (not test.cpp) into a project

## Example
---

```cpp
#include <iostream>
#include <string>

#include "dr_opt.h"

int main(int argc, char* args[]) {
    dr::setopt(argc, args);

    // You can also use flags more than one character in length
    if(dr::hasopt("a")) {
        // "-a" flag was found in command options
        std::string aOpt = dr::getopt("a");
        // "aOpt" now contains the "-a" flag parameter
        std::cout << aOpt << std::endl;
    }

    return 0;
}
```
