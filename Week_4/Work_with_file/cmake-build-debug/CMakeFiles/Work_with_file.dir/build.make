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
CMAKE_SOURCE_DIR = E:\Coursera_whiteband\Week_4\Work_with_file

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Coursera_whiteband\Week_4\Work_with_file\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Work_with_file.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Work_with_file.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Work_with_file.dir/flags.make

CMakeFiles/Work_with_file.dir/main.cpp.obj: CMakeFiles/Work_with_file.dir/flags.make
CMakeFiles/Work_with_file.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Coursera_whiteband\Week_4\Work_with_file\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Work_with_file.dir/main.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Work_with_file.dir\main.cpp.obj -c E:\Coursera_whiteband\Week_4\Work_with_file\main.cpp

CMakeFiles/Work_with_file.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Work_with_file.dir/main.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Coursera_whiteband\Week_4\Work_with_file\main.cpp > CMakeFiles\Work_with_file.dir\main.cpp.i

CMakeFiles/Work_with_file.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Work_with_file.dir/main.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Coursera_whiteband\Week_4\Work_with_file\main.cpp -o CMakeFiles\Work_with_file.dir\main.cpp.s

CMakeFiles/Work_with_file.dir/main2.cpp.obj: CMakeFiles/Work_with_file.dir/flags.make
CMakeFiles/Work_with_file.dir/main2.cpp.obj: ../main2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Coursera_whiteband\Week_4\Work_with_file\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Work_with_file.dir/main2.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Work_with_file.dir\main2.cpp.obj -c E:\Coursera_whiteband\Week_4\Work_with_file\main2.cpp

CMakeFiles/Work_with_file.dir/main2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Work_with_file.dir/main2.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Coursera_whiteband\Week_4\Work_with_file\main2.cpp > CMakeFiles\Work_with_file.dir\main2.cpp.i

CMakeFiles/Work_with_file.dir/main2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Work_with_file.dir/main2.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Coursera_whiteband\Week_4\Work_with_file\main2.cpp -o CMakeFiles\Work_with_file.dir\main2.cpp.s

# Object files for target Work_with_file
Work_with_file_OBJECTS = \
"CMakeFiles/Work_with_file.dir/main.cpp.obj" \
"CMakeFiles/Work_with_file.dir/main2.cpp.obj"

# External object files for target Work_with_file
Work_with_file_EXTERNAL_OBJECTS =

Work_with_file.exe: CMakeFiles/Work_with_file.dir/main.cpp.obj
Work_with_file.exe: CMakeFiles/Work_with_file.dir/main2.cpp.obj
Work_with_file.exe: CMakeFiles/Work_with_file.dir/build.make
Work_with_file.exe: CMakeFiles/Work_with_file.dir/linklibs.rsp
Work_with_file.exe: CMakeFiles/Work_with_file.dir/objects1.rsp
Work_with_file.exe: CMakeFiles/Work_with_file.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Coursera_whiteband\Week_4\Work_with_file\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Work_with_file.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Work_with_file.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Work_with_file.dir/build: Work_with_file.exe

.PHONY : CMakeFiles/Work_with_file.dir/build

CMakeFiles/Work_with_file.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Work_with_file.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Work_with_file.dir/clean

CMakeFiles/Work_with_file.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Coursera_whiteband\Week_4\Work_with_file E:\Coursera_whiteband\Week_4\Work_with_file E:\Coursera_whiteband\Week_4\Work_with_file\cmake-build-debug E:\Coursera_whiteband\Week_4\Work_with_file\cmake-build-debug E:\Coursera_whiteband\Week_4\Work_with_file\cmake-build-debug\CMakeFiles\Work_with_file.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Work_with_file.dir/depend
