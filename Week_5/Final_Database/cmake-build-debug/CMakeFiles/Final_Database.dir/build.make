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
CMAKE_SOURCE_DIR = E:\Coursera_whiteband\Week_5\Final_Database

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Coursera_whiteband\Week_5\Final_Database\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Final_Database.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Final_Database.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Final_Database.dir/flags.make

CMakeFiles/Final_Database.dir/main.cpp.obj: CMakeFiles/Final_Database.dir/flags.make
CMakeFiles/Final_Database.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Coursera_whiteband\Week_5\Final_Database\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Final_Database.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Final_Database.dir\main.cpp.obj -c E:\Coursera_whiteband\Week_5\Final_Database\main.cpp

CMakeFiles/Final_Database.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Final_Database.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Coursera_whiteband\Week_5\Final_Database\main.cpp > CMakeFiles\Final_Database.dir\main.cpp.i

CMakeFiles/Final_Database.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Final_Database.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Coursera_whiteband\Week_5\Final_Database\main.cpp -o CMakeFiles\Final_Database.dir\main.cpp.s

# Object files for target Final_Database
Final_Database_OBJECTS = \
"CMakeFiles/Final_Database.dir/main.cpp.obj"

# External object files for target Final_Database
Final_Database_EXTERNAL_OBJECTS =

Final_Database.exe: CMakeFiles/Final_Database.dir/main.cpp.obj
Final_Database.exe: CMakeFiles/Final_Database.dir/build.make
Final_Database.exe: CMakeFiles/Final_Database.dir/linklibs.rsp
Final_Database.exe: CMakeFiles/Final_Database.dir/objects1.rsp
Final_Database.exe: CMakeFiles/Final_Database.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Coursera_whiteband\Week_5\Final_Database\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Final_Database.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Final_Database.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Final_Database.dir/build: Final_Database.exe

.PHONY : CMakeFiles/Final_Database.dir/build

CMakeFiles/Final_Database.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Final_Database.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Final_Database.dir/clean

CMakeFiles/Final_Database.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Coursera_whiteband\Week_5\Final_Database E:\Coursera_whiteband\Week_5\Final_Database E:\Coursera_whiteband\Week_5\Final_Database\cmake-build-debug E:\Coursera_whiteband\Week_5\Final_Database\cmake-build-debug E:\Coursera_whiteband\Week_5\Final_Database\cmake-build-debug\CMakeFiles\Final_Database.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Final_Database.dir/depend

