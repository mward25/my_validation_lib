# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/miles/cpp_stuff/my_validation_lib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/miles/cpp_stuff/my_validation_lib/build

# Include any dependencies generated for this target.
include driver/CMakeFiles/driver.dir/depend.make

# Include the progress variables for this target.
include driver/CMakeFiles/driver.dir/progress.make

# Include the compile flags for this target's objects.
include driver/CMakeFiles/driver.dir/flags.make

driver/CMakeFiles/driver.dir/driver.cpp.o: driver/CMakeFiles/driver.dir/flags.make
driver/CMakeFiles/driver.dir/driver.cpp.o: ../driver/driver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miles/cpp_stuff/my_validation_lib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object driver/CMakeFiles/driver.dir/driver.cpp.o"
	cd /home/miles/cpp_stuff/my_validation_lib/build/driver && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/driver.dir/driver.cpp.o -c /home/miles/cpp_stuff/my_validation_lib/driver/driver.cpp

driver/CMakeFiles/driver.dir/driver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/driver.dir/driver.cpp.i"
	cd /home/miles/cpp_stuff/my_validation_lib/build/driver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/miles/cpp_stuff/my_validation_lib/driver/driver.cpp > CMakeFiles/driver.dir/driver.cpp.i

driver/CMakeFiles/driver.dir/driver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/driver.dir/driver.cpp.s"
	cd /home/miles/cpp_stuff/my_validation_lib/build/driver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/miles/cpp_stuff/my_validation_lib/driver/driver.cpp -o CMakeFiles/driver.dir/driver.cpp.s

# Object files for target driver
driver_OBJECTS = \
"CMakeFiles/driver.dir/driver.cpp.o"

# External object files for target driver
driver_EXTERNAL_OBJECTS =

driver/driver: driver/CMakeFiles/driver.dir/driver.cpp.o
driver/driver: driver/CMakeFiles/driver.dir/build.make
driver/driver: libmyValidationLib.a
driver/driver: driver/CMakeFiles/driver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/miles/cpp_stuff/my_validation_lib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable driver"
	cd /home/miles/cpp_stuff/my_validation_lib/build/driver && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/driver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
driver/CMakeFiles/driver.dir/build: driver/driver

.PHONY : driver/CMakeFiles/driver.dir/build

driver/CMakeFiles/driver.dir/clean:
	cd /home/miles/cpp_stuff/my_validation_lib/build/driver && $(CMAKE_COMMAND) -P CMakeFiles/driver.dir/cmake_clean.cmake
.PHONY : driver/CMakeFiles/driver.dir/clean

driver/CMakeFiles/driver.dir/depend:
	cd /home/miles/cpp_stuff/my_validation_lib/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/miles/cpp_stuff/my_validation_lib /home/miles/cpp_stuff/my_validation_lib/driver /home/miles/cpp_stuff/my_validation_lib/build /home/miles/cpp_stuff/my_validation_lib/build/driver /home/miles/cpp_stuff/my_validation_lib/build/driver/CMakeFiles/driver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : driver/CMakeFiles/driver.dir/depend

