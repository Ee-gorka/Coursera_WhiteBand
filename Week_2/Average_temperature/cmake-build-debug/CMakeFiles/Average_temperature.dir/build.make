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
CMAKE_SOURCE_DIR = E:\Coursera_whiteband\Week_2\Average_temperature

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Coursera_whiteband\Week_2\Average_temperature\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Average_temperature.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Average_temperature.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Average_temperature.dir/flags.make

CMakeFiles/Average_temperature.dir/main.cpp.obj: CMakeFiles/Average_temperature.dir/flags.make
CMakeFiles/Average_temperature.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Coursera_whiteband\Week_2\Average_temperature\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Average_temperature.dir/main.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Average_temperature.dir\main.cpp.obj -c E:\Coursera_whiteband\Week_2\Average_temperature\main.cpp

CMakeFiles/Average_temperature.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Average_temperature.dir/main.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Coursera_whiteband\Week_2\Average_temperature\main.cpp > CMakeFiles\Average_temperature.dir\main.cpp.i

CMakeFiles/Average_temperature.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Average_temperature.dir/main.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Coursera_whiteband\Week_2\Average_temperature\main.cpp -o CMakeFiles\Average_temperature.dir\main.cpp.s

# Object files for target Average_temperature
Average_temperature_OBJECTS = \
"CMakeFiles/Average_temperature.dir/main.cpp.obj"

# External object files for target Average_temperature
Average_temperature_EXTERNAL_OBJECTS =

Average_temperature.exe: CMakeFiles/Average_temperature.dir/main.cpp.obj
Average_temperature.exe: CMakeFiles/Average_temperature.dir/build.make
Average_temperature.exe: CMakeFiles/Average_temperature.dir/linklibs.rsp
Average_temperature.exe: CMakeFiles/Average_temperature.dir/objects1.rsp
Average_temperature.exe: CMakeFiles/Average_temperature.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Coursera_whiteband\Week_2\Average_temperature\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Average_temperature.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Average_temperature.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Average_temperature.dir/build: Average_temperature.exe

.PHONY : CMakeFiles/Average_temperature.dir/build

CMakeFiles/Average_temperature.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Average_temperature.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Average_temperature.dir/clean

CMakeFiles/Average_temperature.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Coursera_whiteband\Week_2\Average_temperature E:\Coursera_whiteband\Week_2\Average_temperature E:\Coursera_whiteband\Week_2\Average_temperature\cmake-build-debug E:\Coursera_whiteband\Week_2\Average_temperature\cmake-build-debug E:\Coursera_whiteband\Week_2\Average_temperature\cmake-build-debug\CMakeFiles\Average_temperature.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Average_temperature.dir/depend

