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
CMAKE_COMMAND = C:\Users\alex2\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.5233.103\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\alex2\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.5233.103\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\OneDrive - USherbrooke\cours\IFT 339\TP\tp5\CodeDepart"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\OneDrive - USherbrooke\cours\IFT 339\TP\tp5\CodeDepart\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CodeDepart.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CodeDepart.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CodeDepart.dir/flags.make

CMakeFiles/CodeDepart.dir/main.cpp.obj: CMakeFiles/CodeDepart.dir/flags.make
CMakeFiles/CodeDepart.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\OneDrive - USherbrooke\cours\IFT 339\TP\tp5\CodeDepart\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CodeDepart.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CodeDepart.dir\main.cpp.obj -c "D:\OneDrive - USherbrooke\cours\IFT 339\TP\tp5\CodeDepart\main.cpp"

CMakeFiles/CodeDepart.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeDepart.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\OneDrive - USherbrooke\cours\IFT 339\TP\tp5\CodeDepart\main.cpp" > CMakeFiles\CodeDepart.dir\main.cpp.i

CMakeFiles/CodeDepart.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeDepart.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\OneDrive - USherbrooke\cours\IFT 339\TP\tp5\CodeDepart\main.cpp" -o CMakeFiles\CodeDepart.dir\main.cpp.s

# Object files for target CodeDepart
CodeDepart_OBJECTS = \
"CMakeFiles/CodeDepart.dir/main.cpp.obj"

# External object files for target CodeDepart
CodeDepart_EXTERNAL_OBJECTS =

CodeDepart.exe: CMakeFiles/CodeDepart.dir/main.cpp.obj
CodeDepart.exe: CMakeFiles/CodeDepart.dir/build.make
CodeDepart.exe: CMakeFiles/CodeDepart.dir/linklibs.rsp
CodeDepart.exe: CMakeFiles/CodeDepart.dir/objects1.rsp
CodeDepart.exe: CMakeFiles/CodeDepart.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\OneDrive - USherbrooke\cours\IFT 339\TP\tp5\CodeDepart\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CodeDepart.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CodeDepart.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CodeDepart.dir/build: CodeDepart.exe

.PHONY : CMakeFiles/CodeDepart.dir/build

CMakeFiles/CodeDepart.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CodeDepart.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CodeDepart.dir/clean

CMakeFiles/CodeDepart.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\OneDrive - USherbrooke\cours\IFT 339\TP\tp5\CodeDepart" "D:\OneDrive - USherbrooke\cours\IFT 339\TP\tp5\CodeDepart" "D:\OneDrive - USherbrooke\cours\IFT 339\TP\tp5\CodeDepart\cmake-build-debug" "D:\OneDrive - USherbrooke\cours\IFT 339\TP\tp5\CodeDepart\cmake-build-debug" "D:\OneDrive - USherbrooke\cours\IFT 339\TP\tp5\CodeDepart\cmake-build-debug\CMakeFiles\CodeDepart.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CodeDepart.dir/depend

