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
CMAKE_SOURCE_DIR = E:\Coursera_whiteband\Week_2\Set_of_values

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Coursera_whiteband\Week_2\Set_of_values\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Set_of_values.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Set_of_values.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Set_of_values.dir/flags.make

CMakeFiles/Set_of_values.dir/main.cpp.obj: CMakeFiles/Set_of_values.dir/flags.make
CMakeFiles/Set_of_values.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Coursera_whiteband\Week_2\Set_of_values\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Set_of_values.dir/main.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Set_of_values.dir\main.cpp.obj -c E:\Coursera_whiteband\Week_2\Set_of_values\main.cpp

CMakeFiles/Set_of_values.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Set_of_values.dir/main.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Coursera_whiteband\Week_2\Set_of_values\main.cpp > CMakeFiles\Set_of_values.dir\main.cpp.i

CMakeFiles/Set_of_values.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Set_of_values.dir/main.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Coursera_whiteband\Week_2\Set_of_values\main.cpp -o CMakeFiles\Set_of_values.dir\main.cpp.s

# Object files for target Set_of_values
Set_of_values_OBJECTS = \
"CMakeFiles/Set_of_values.dir/main.cpp.obj"

# External object files for target Set_of_values
Set_of_values_EXTERNAL_OBJECTS =

Set_of_values.exe: CMakeFiles/Set_of_values.dir/main.cpp.obj
Set_of_values.exe: CMakeFiles/Set_of_values.dir/build.make
Set_of_values.exe: CMakeFiles/Set_of_values.dir/linklibs.rsp
Set_of_values.exe: CMakeFiles/Set_of_values.dir/objects1.rsp
Set_of_values.exe: CMakeFiles/Set_of_values.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Coursera_whiteband\Week_2\Set_of_values\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Set_of_values.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Set_of_values.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Set_of_values.dir/build: Set_of_values.exe

.PHONY : CMakeFiles/Set_of_values.dir/build

CMakeFiles/Set_of_values.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Set_of_values.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Set_of_values.dir/clean

CMakeFiles/Set_of_values.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Coursera_whiteband\Week_2\Set_of_values E:\Coursera_whiteband\Week_2\Set_of_values E:\Coursera_whiteband\Week_2\Set_of_values\cmake-build-debug E:\Coursera_whiteband\Week_2\Set_of_values\cmake-build-debug E:\Coursera_whiteband\Week_2\Set_of_values\cmake-build-debug\CMakeFiles\Set_of_values.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Set_of_values.dir/depend

