# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\weonsj\CLionProjects\C_Dev

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\weonsj\CLionProjects\C_Dev\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C_Dev.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C_Dev.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C_Dev.dir/flags.make

CMakeFiles/C_Dev.dir/main.c.obj: CMakeFiles/C_Dev.dir/flags.make
CMakeFiles/C_Dev.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\weonsj\CLionProjects\C_Dev\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/C_Dev.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\C_Dev.dir\main.c.obj   -c C:\Users\weonsj\CLionProjects\C_Dev\main.c

CMakeFiles/C_Dev.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C_Dev.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\weonsj\CLionProjects\C_Dev\main.c > CMakeFiles\C_Dev.dir\main.c.i

CMakeFiles/C_Dev.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C_Dev.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\weonsj\CLionProjects\C_Dev\main.c -o CMakeFiles\C_Dev.dir\main.c.s

# Object files for target C_Dev
C_Dev_OBJECTS = \
"CMakeFiles/C_Dev.dir/main.c.obj"

# External object files for target C_Dev
C_Dev_EXTERNAL_OBJECTS =

C_Dev.exe: CMakeFiles/C_Dev.dir/main.c.obj
C_Dev.exe: CMakeFiles/C_Dev.dir/build.make
C_Dev.exe: CMakeFiles/C_Dev.dir/linklibs.rsp
C_Dev.exe: CMakeFiles/C_Dev.dir/objects1.rsp
C_Dev.exe: CMakeFiles/C_Dev.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\weonsj\CLionProjects\C_Dev\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable C_Dev.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\C_Dev.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C_Dev.dir/build: C_Dev.exe

.PHONY : CMakeFiles/C_Dev.dir/build

CMakeFiles/C_Dev.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\C_Dev.dir\cmake_clean.cmake
.PHONY : CMakeFiles/C_Dev.dir/clean

CMakeFiles/C_Dev.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\weonsj\CLionProjects\C_Dev C:\Users\weonsj\CLionProjects\C_Dev C:\Users\weonsj\CLionProjects\C_Dev\cmake-build-debug C:\Users\weonsj\CLionProjects\C_Dev\cmake-build-debug C:\Users\weonsj\CLionProjects\C_Dev\cmake-build-debug\CMakeFiles\C_Dev.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C_Dev.dir/depend
