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
CMAKE_SOURCE_DIR = "C:\Users\Cici\CLionProjects\final charactar count"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Cici\CLionProjects\final charactar count\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/final_charactar_count.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/final_charactar_count.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/final_charactar_count.dir/flags.make

CMakeFiles/final_charactar_count.dir/main.cpp.obj: CMakeFiles/final_charactar_count.dir/flags.make
CMakeFiles/final_charactar_count.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Cici\CLionProjects\final charactar count\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/final_charactar_count.dir/main.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\final_charactar_count.dir\main.cpp.obj -c "C:\Users\Cici\CLionProjects\final charactar count\main.cpp"

CMakeFiles/final_charactar_count.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/final_charactar_count.dir/main.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Cici\CLionProjects\final charactar count\main.cpp" > CMakeFiles\final_charactar_count.dir\main.cpp.i

CMakeFiles/final_charactar_count.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/final_charactar_count.dir/main.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Cici\CLionProjects\final charactar count\main.cpp" -o CMakeFiles\final_charactar_count.dir\main.cpp.s

# Object files for target final_charactar_count
final_charactar_count_OBJECTS = \
"CMakeFiles/final_charactar_count.dir/main.cpp.obj"

# External object files for target final_charactar_count
final_charactar_count_EXTERNAL_OBJECTS =

final_charactar_count.exe: CMakeFiles/final_charactar_count.dir/main.cpp.obj
final_charactar_count.exe: CMakeFiles/final_charactar_count.dir/build.make
final_charactar_count.exe: CMakeFiles/final_charactar_count.dir/linklibs.rsp
final_charactar_count.exe: CMakeFiles/final_charactar_count.dir/objects1.rsp
final_charactar_count.exe: CMakeFiles/final_charactar_count.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Cici\CLionProjects\final charactar count\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable final_charactar_count.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\final_charactar_count.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/final_charactar_count.dir/build: final_charactar_count.exe

.PHONY : CMakeFiles/final_charactar_count.dir/build

CMakeFiles/final_charactar_count.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\final_charactar_count.dir\cmake_clean.cmake
.PHONY : CMakeFiles/final_charactar_count.dir/clean

CMakeFiles/final_charactar_count.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Cici\CLionProjects\final charactar count" "C:\Users\Cici\CLionProjects\final charactar count" "C:\Users\Cici\CLionProjects\final charactar count\cmake-build-debug" "C:\Users\Cici\CLionProjects\final charactar count\cmake-build-debug" "C:\Users\Cici\CLionProjects\final charactar count\cmake-build-debug\CMakeFiles\final_charactar_count.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/final_charactar_count.dir/depend

