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
CMAKE_SOURCE_DIR = "C:\Users\Cici\CLionProjects\template class"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Cici\CLionProjects\template class\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/template_class.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/template_class.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/template_class.dir/flags.make

CMakeFiles/template_class.dir/main.cpp.obj: CMakeFiles/template_class.dir/flags.make
CMakeFiles/template_class.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Cici\CLionProjects\template class\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/template_class.dir/main.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\template_class.dir\main.cpp.obj -c "C:\Users\Cici\CLionProjects\template class\main.cpp"

CMakeFiles/template_class.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/template_class.dir/main.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Cici\CLionProjects\template class\main.cpp" > CMakeFiles\template_class.dir\main.cpp.i

CMakeFiles/template_class.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/template_class.dir/main.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Cici\CLionProjects\template class\main.cpp" -o CMakeFiles\template_class.dir\main.cpp.s

# Object files for target template_class
template_class_OBJECTS = \
"CMakeFiles/template_class.dir/main.cpp.obj"

# External object files for target template_class
template_class_EXTERNAL_OBJECTS =

template_class.exe: CMakeFiles/template_class.dir/main.cpp.obj
template_class.exe: CMakeFiles/template_class.dir/build.make
template_class.exe: CMakeFiles/template_class.dir/linklibs.rsp
template_class.exe: CMakeFiles/template_class.dir/objects1.rsp
template_class.exe: CMakeFiles/template_class.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Cici\CLionProjects\template class\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable template_class.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\template_class.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/template_class.dir/build: template_class.exe

.PHONY : CMakeFiles/template_class.dir/build

CMakeFiles/template_class.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\template_class.dir\cmake_clean.cmake
.PHONY : CMakeFiles/template_class.dir/clean

CMakeFiles/template_class.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Cici\CLionProjects\template class" "C:\Users\Cici\CLionProjects\template class" "C:\Users\Cici\CLionProjects\template class\cmake-build-debug" "C:\Users\Cici\CLionProjects\template class\cmake-build-debug" "C:\Users\Cici\CLionProjects\template class\cmake-build-debug\CMakeFiles\template_class.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/template_class.dir/depend
