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
CMAKE_SOURCE_DIR = E:\Coursera_whiteband\Week_1\Cost_product

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Coursera_whiteband\Week_1\Cost_product\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Cost_product.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Cost_product.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cost_product.dir/flags.make

CMakeFiles/Cost_product.dir/main.cpp.obj: CMakeFiles/Cost_product.dir/flags.make
CMakeFiles/Cost_product.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Coursera_whiteband\Week_1\Cost_product\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Cost_product.dir/main.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Cost_product.dir\main.cpp.obj -c E:\Coursera_whiteband\Week_1\Cost_product\main.cpp

CMakeFiles/Cost_product.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cost_product.dir/main.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Coursera_whiteband\Week_1\Cost_product\main.cpp > CMakeFiles\Cost_product.dir\main.cpp.i

CMakeFiles/Cost_product.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cost_product.dir/main.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Coursera_whiteband\Week_1\Cost_product\main.cpp -o CMakeFiles\Cost_product.dir\main.cpp.s

# Object files for target Cost_product
Cost_product_OBJECTS = \
"CMakeFiles/Cost_product.dir/main.cpp.obj"

# External object files for target Cost_product
Cost_product_EXTERNAL_OBJECTS =

Cost_product.exe: CMakeFiles/Cost_product.dir/main.cpp.obj
Cost_product.exe: CMakeFiles/Cost_product.dir/build.make
Cost_product.exe: CMakeFiles/Cost_product.dir/linklibs.rsp
Cost_product.exe: CMakeFiles/Cost_product.dir/objects1.rsp
Cost_product.exe: CMakeFiles/Cost_product.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Coursera_whiteband\Week_1\Cost_product\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Cost_product.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Cost_product.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cost_product.dir/build: Cost_product.exe

.PHONY : CMakeFiles/Cost_product.dir/build

CMakeFiles/Cost_product.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Cost_product.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Cost_product.dir/clean

CMakeFiles/Cost_product.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Coursera_whiteband\Week_1\Cost_product E:\Coursera_whiteband\Week_1\Cost_product E:\Coursera_whiteband\Week_1\Cost_product\cmake-build-debug E:\Coursera_whiteband\Week_1\Cost_product\cmake-build-debug E:\Coursera_whiteband\Week_1\Cost_product\cmake-build-debug\CMakeFiles\Cost_product.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Cost_product.dir/depend

