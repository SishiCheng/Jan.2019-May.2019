# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Cici\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\191.6707.69\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Cici\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\191.6707.69\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Cici\CLionProjects\recursive binary search"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Cici\CLionProjects\recursive binary search\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/recursive_binary_search.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/recursive_binary_search.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/recursive_binary_search.dir/flags.make

CMakeFiles/recursive_binary_search.dir/main.cpp.obj: CMakeFiles/recursive_binary_search.dir/flags.make
CMakeFiles/recursive_binary_search.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Cici\CLionProjects\recursive binary search\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/recursive_binary_search.dir/main.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\recursive_binary_search.dir\main.cpp.obj -c "C:\Users\Cici\CLionProjects\recursive binary search\main.cpp"

CMakeFiles/recursive_binary_search.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/recursive_binary_search.dir/main.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Cici\CLionProjects\recursive binary search\main.cpp" > CMakeFiles\recursive_binary_search.dir\main.cpp.i

CMakeFiles/recursive_binary_search.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/recursive_binary_search.dir/main.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Cici\CLionProjects\recursive binary search\main.cpp" -o CMakeFiles\recursive_binary_search.dir\main.cpp.s

# Object files for target recursive_binary_search
recursive_binary_search_OBJECTS = \
"CMakeFiles/recursive_binary_search.dir/main.cpp.obj"

# External object files for target recursive_binary_search
recursive_binary_search_EXTERNAL_OBJECTS =

recursive_binary_search.exe: CMakeFiles/recursive_binary_search.dir/main.cpp.obj
recursive_binary_search.exe: CMakeFiles/recursive_binary_search.dir/build.make
recursive_binary_search.exe: CMakeFiles/recursive_binary_search.dir/linklibs.rsp
recursive_binary_search.exe: CMakeFiles/recursive_binary_search.dir/objects1.rsp
recursive_binary_search.exe: CMakeFiles/recursive_binary_search.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Cici\CLionProjects\recursive binary search\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable recursive_binary_search.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\recursive_binary_search.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/recursive_binary_search.dir/build: recursive_binary_search.exe

.PHONY : CMakeFiles/recursive_binary_search.dir/build

CMakeFiles/recursive_binary_search.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\recursive_binary_search.dir\cmake_clean.cmake
.PHONY : CMakeFiles/recursive_binary_search.dir/clean

CMakeFiles/recursive_binary_search.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Cici\CLionProjects\recursive binary search" "C:\Users\Cici\CLionProjects\recursive binary search" "C:\Users\Cici\CLionProjects\recursive binary search\cmake-build-debug" "C:\Users\Cici\CLionProjects\recursive binary search\cmake-build-debug" "C:\Users\Cici\CLionProjects\recursive binary search\cmake-build-debug\CMakeFiles\recursive_binary_search.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/recursive_binary_search.dir/depend

