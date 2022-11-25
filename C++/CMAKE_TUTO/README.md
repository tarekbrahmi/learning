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
| `message`                | prints given message                                        |
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