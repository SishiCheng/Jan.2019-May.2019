# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = C:\Users\Cici\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\183.5429.37\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Cici\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\183.5429.37\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Cici\CLionProjects\function templates"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Cici\CLionProjects\function templates\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/function_templates.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/function_templates.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/function_templates.dir/flags.make

CMakeFiles/function_templates.dir/main.cpp.obj: CMakeFiles/function_templates.dir/flags.make
CMakeFiles/function_templates.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Cici\CLionProjects\function templates\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/function_templates.dir/main.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\function_templates.dir\main.cpp.obj -c "C:\Users\Cici\CLionProjects\function templates\main.cpp"

CMakeFiles/function_templates.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/function_templates.dir/main.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Cici\CLionProjects\function templates\main.cpp" > CMakeFiles\function_templates.dir\main.cpp.i

CMakeFiles/function_templates.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/function_templates.dir/main.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Cici\CLionProjects\function templates\main.cpp" -o CMakeFiles\function_templates.dir\main.cpp.s

# Object files for target function_templates
function_templates_OBJECTS = \
"CMakeFiles/function_templates.dir/main.cpp.obj"

# External object files for target function_templates
function_templates_EXTERNAL_OBJECTS =

function_templates.exe: CMakeFiles/function_templates.dir/main.cpp.obj
function_templates.exe: CMakeFiles/function_templates.dir/build.make
function_templates.exe: CMakeFiles/function_templates.dir/linklibs.rsp
function_templates.exe: CMakeFiles/function_templates.dir/objects1.rsp
function_templates.exe: CMakeFiles/function_templates.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Cici\CLionProjects\function templates\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable function_templates.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\function_templates.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/function_templates.dir/build: function_templates.exe

.PHONY : CMakeFiles/function_templates.dir/build

CMakeFiles/function_templates.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\function_templates.dir\cmake_clean.cmake
.PHONY : CMakeFiles/function_templates.dir/clean

CMakeFiles/function_templates.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Cici\CLionProjects\function templates" "C:\Users\Cici\CLionProjects\function templates" "C:\Users\Cici\CLionProjects\function templates\cmake-build-debug" "C:\Users\Cici\CLionProjects\function templates\cmake-build-debug" "C:\Users\Cici\CLionProjects\function templates\cmake-build-debug\CMakeFiles\function_templates.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/function_templates.dir/depend

