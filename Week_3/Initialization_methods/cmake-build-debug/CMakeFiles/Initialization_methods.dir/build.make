# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Coursera_whiteband\Week_3\Initialization_methods

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Coursera_whiteband\Week_3\Initialization_methods\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Initialization_methods.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Initialization_methods.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Initialization_methods.dir/flags.make

CMakeFiles/Initialization_methods.dir/main.cpp.obj: CMakeFiles/Initialization_methods.dir/flags.make
CMakeFiles/Initialization_methods.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Coursera_whiteband\Week_3\Initialization_methods\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Initialization_methods.dir/main.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Initialization_methods.dir\main.cpp.obj -c E:\Coursera_whiteband\Week_3\Initialization_methods\main.cpp

CMakeFiles/Initialization_methods.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Initialization_methods.dir/main.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Coursera_whiteband\Week_3\Initialization_methods\main.cpp > CMakeFiles\Initialization_methods.dir\main.cpp.i

CMakeFiles/Initialization_methods.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Initialization_methods.dir/main.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Coursera_whiteband\Week_3\Initialization_methods\main.cpp -o CMakeFiles\Initialization_methods.dir\main.cpp.s

# Object files for target Initialization_methods
Initialization_methods_OBJECTS = \
"CMakeFiles/Initialization_methods.dir/main.cpp.obj"

# External object files for target Initialization_methods
Initialization_methods_EXTERNAL_OBJECTS =

Initialization_methods.exe: CMakeFiles/Initialization_methods.dir/main.cpp.obj
Initialization_methods.exe: CMakeFiles/Initialization_methods.dir/build.make
Initialization_methods.exe: CMakeFiles/Initialization_methods.dir/linklibs.rsp
Initialization_methods.exe: CMakeFiles/Initialization_methods.dir/objects1.rsp
Initialization_methods.exe: CMakeFiles/Initialization_methods.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Coursera_whiteband\Week_3\Initialization_methods\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Initialization_methods.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Initialization_methods.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Initialization_methods.dir/build: Initialization_methods.exe

.PHONY : CMakeFiles/Initialization_methods.dir/build

CMakeFiles/Initialization_methods.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Initialization_methods.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Initialization_methods.dir/clean

CMakeFiles/Initialization_methods.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Coursera_whiteband\Week_3\Initialization_methods E:\Coursera_whiteband\Week_3\Initialization_methods E:\Coursera_whiteband\Week_3\Initialization_methods\cmake-build-debug E:\Coursera_whiteband\Week_3\Initialization_methods\cmake-build-debug E:\Coursera_whiteband\Week_3\Initialization_methods\cmake-build-debug\CMakeFiles\Initialization_methods.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Initialization_methods.dir/depend
