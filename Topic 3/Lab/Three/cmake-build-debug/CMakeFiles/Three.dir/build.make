# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "H:\CLion\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "H:\CLion\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\NAMI\Year 2\Term II\Courses\Software Engineering\Topic 3\Lab\Three"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\NAMI\Year 2\Term II\Courses\Software Engineering\Topic 3\Lab\Three\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Three.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Three.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Three.dir/flags.make

CMakeFiles/Three.dir/main.cpp.obj: CMakeFiles/Three.dir/flags.make
CMakeFiles/Three.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\NAMI\Year 2\Term II\Courses\Software Engineering\Topic 3\Lab\Three\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Three.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Three.dir\main.cpp.obj -c "E:\NAMI\Year 2\Term II\Courses\Software Engineering\Topic 3\Lab\Three\main.cpp"

CMakeFiles/Three.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Three.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\NAMI\Year 2\Term II\Courses\Software Engineering\Topic 3\Lab\Three\main.cpp" > CMakeFiles\Three.dir\main.cpp.i

CMakeFiles/Three.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Three.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\NAMI\Year 2\Term II\Courses\Software Engineering\Topic 3\Lab\Three\main.cpp" -o CMakeFiles\Three.dir\main.cpp.s

# Object files for target Three
Three_OBJECTS = \
"CMakeFiles/Three.dir/main.cpp.obj"

# External object files for target Three
Three_EXTERNAL_OBJECTS =

Three.exe: CMakeFiles/Three.dir/main.cpp.obj
Three.exe: CMakeFiles/Three.dir/build.make
Three.exe: CMakeFiles/Three.dir/linklibs.rsp
Three.exe: CMakeFiles/Three.dir/objects1.rsp
Three.exe: CMakeFiles/Three.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\NAMI\Year 2\Term II\Courses\Software Engineering\Topic 3\Lab\Three\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Three.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Three.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Three.dir/build: Three.exe

.PHONY : CMakeFiles/Three.dir/build

CMakeFiles/Three.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Three.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Three.dir/clean

CMakeFiles/Three.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\NAMI\Year 2\Term II\Courses\Software Engineering\Topic 3\Lab\Three" "E:\NAMI\Year 2\Term II\Courses\Software Engineering\Topic 3\Lab\Three" "E:\NAMI\Year 2\Term II\Courses\Software Engineering\Topic 3\Lab\Three\cmake-build-debug" "E:\NAMI\Year 2\Term II\Courses\Software Engineering\Topic 3\Lab\Three\cmake-build-debug" "E:\NAMI\Year 2\Term II\Courses\Software Engineering\Topic 3\Lab\Three\cmake-build-debug\CMakeFiles\Three.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Three.dir/depend

