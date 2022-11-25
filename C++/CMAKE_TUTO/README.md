### Cmake tutorial
> CMake is an extensible, open-source system that manages the build process in an operating system and in a compiler-independent manner.

> CMake can generate a native build environment that will compile source code, create libraries, generate wrappers and build executable binaries in arbitrary combinations. CMake supports in-place and out-of-place builds, and can therefore support multiple builds from a single source tree.


- Build logic and definitions with CMake language is written either in `CMakeLists.txt` or a file ends with `<project_name>.cmake` .
  - `CMakeLists.txt` file is placed at the source of the project you want to build.
  - `CMakeLists.txt` is placed at the root of the source tree of any application, library it will work for. 
  - If there are multiple modules, and each module can be compiled and built separately, `CMakeLists.txt` can be inserted into the sub folder.

###  CMake Commands
> similar to C++/Java methods or functions, which take parameters as a list and perform certain tasks accordingly.

> case insensitive.

> commonly used commands

| Command                  | Description                                                 |
|--------------------------|-------------------------------------------------------------|
| `message`                | prints given [message](https://cmake.org/cmake/help/v3.0/command/message.html)                                       |
| `cmake_minimum_required` | sets minimum version of cmake to be used                    |
| `add_executable`         | adds executable target with given name                      |
| `add_library`            | adds a library target to be build from listed source files  |
| `add_subdirectory`       | adds a subdirectory to build                                |



>write out conditional statements, loops, iterate on list, assignments
- `if, endif`
- `elif, endif`
- `while, endwhile`
- `foreach, endforeach`
- `list`
- `return`
- `set_property` (assign value to variable.)

### CMake Environment Variables ([all environment variables](https://cmake.org/cmake/help/latest/manual/cmake-env-variables.7.html))
> Environment variables are used to configure compiler flags, linker flags, test configurations for a regular build process. Compiler have to be guided to search for given directories for libraries.

> to enable all warnings during compile process:
- write `-Wall` to build command ```set(CMAKE_CXX_FLAGS "-Wall")```

### CMake Variables ([all variables](https://cmake.org/cmake/help/v3.0/manual/cmake-variables.7.html#manual:cmake-variables(7)))
> CMake includes predefined variables which are set by default as location of source tree and system components.

> Variables are case-sensitive, not like commands. 
> commonly used commands

|Variable               | Description                                                   |
|-----------------------|---------------------------------------------------------------|
|`CMAKE_BINARY_DIR`     | Full path to top level of build tree and binary output folder |
|`CMAKE_HOME_DIRECTORY` | Path to top of source tree                                    |
|`CMAKE_SOURCE_DIR`     | Full path to top level of source tree.                        |
|`CMAKE_INCLUDE_PATH`   | Path used to find file, path                                  |

>Variable values can be accessed with `${<variable_name>}`.

___example :___
```
message("CXX Standard: ${CMAKE_CXX_STANDARD}")
set(CMAKE_CXX_STANDARD 14)
set(TRIAL_VARIABLE "VALUE")
message("${TRIAL_VARIABLE}")
```

### CMake Lists
>A list of elements represented as a string by concatenating elements separated by semi-column `;`.

```
set(files a.txt b.txt c.txt)
# sets files to "a.txt;b.txt;c.txt"

foreach(file ${files})
    message("Filename: ${file}")
endforeach()

```

### CMake Generator Expressions ([all cmake generator expressions](https://cmake.org/cmake/help/v3.3/manual/cmake-generator-expressions.7.html))
>Generator expressions are evaluated during build system generation to produce information specific to each build configuration.

>Generator expressions are allowed in the context of many target properties
- LINK_LIBRARIES
- INCLUDE_DIRECTORIES
- COMPILE_DEFINITIONS 
- and others

>They may also be used when using commands to populate those properties
- target_link_libraries()
- target_include_directories()
- target_compile_definitions() 
- and others
  
### Defining Macros using CMake
> You can define compiler macros to send to code during build process to change behavior.
> You can define macros in CMake with `add_definitions` command, using `-D flag` before the macro name.
```
add_definitions(-DCMAKEMACRO="OK!")
```
### CMake Folder Organization
- While building applications, we try to keep source tree clean and separate auto-generated files and binaries.
- Trying to generate binary file inside bin folder with setting `CMAKE_RUNTIME_OUTPUT_DIRECTORY` or `EXECUTABLE_OUTPUT_PATH`. 