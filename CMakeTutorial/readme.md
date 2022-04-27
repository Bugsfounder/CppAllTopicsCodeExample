Get Started with CMake

# Basic Commands

### Set Required Version of CMake (required)

#### Syntax

```
 cmake_minimum_required(VERSION <VERSION_HERE>)
```

#### Code Example

```
cmake_minimum_required(VERSION 3.16.3)
```

### Set Project

#### Syntax

```
project(<PROJECT_NAME>)
```

#### Code Example

```
project(MANISHA)
```

### Add Executables

#### Syntax

```
# add_executable(<EXECUTABLE_NAME> <SOURCE_FILES>)
```

#### Code Example

```
add_executable(${PROJECT_NAME} main.cpp)
```

#### main.cpp

```
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Manisha is a good girl" << endl;
    return 0;
}
```

# Terminal Commands

### cmake command

#### cmake -S <SOURCE_DIR_LOCATION> -B <BUILD_DIR_LOCATION>

```
cmake -S . -B out/build
```

### make command

#### make -C <BUILD_DIR_LOCATION>

```
make -C out/build/

or

cd out/build && make

or

cd out/build && make -j

or

cd out/build && make -j2
```
