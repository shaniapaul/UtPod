# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/UtPod.cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/UtPod.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UtPod.cpp.dir/flags.make

CMakeFiles/UtPod.cpp.dir/song.cpp.obj: CMakeFiles/UtPod.cpp.dir/flags.make
CMakeFiles/UtPod.cpp.dir/song.cpp.obj: ../song.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UtPod.cpp.dir/song.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\UtPod.cpp.dir\song.cpp.obj -c "C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5\song.cpp"

CMakeFiles/UtPod.cpp.dir/song.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UtPod.cpp.dir/song.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5\song.cpp" > CMakeFiles\UtPod.cpp.dir\song.cpp.i

CMakeFiles/UtPod.cpp.dir/song.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UtPod.cpp.dir/song.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5\song.cpp" -o CMakeFiles\UtPod.cpp.dir\song.cpp.s

CMakeFiles/UtPod.cpp.dir/UtPodDriver.cpp.obj: CMakeFiles/UtPod.cpp.dir/flags.make
CMakeFiles/UtPod.cpp.dir/UtPodDriver.cpp.obj: ../UtPodDriver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/UtPod.cpp.dir/UtPodDriver.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\UtPod.cpp.dir\UtPodDriver.cpp.obj -c "C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5\UtPodDriver.cpp"

CMakeFiles/UtPod.cpp.dir/UtPodDriver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UtPod.cpp.dir/UtPodDriver.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5\UtPodDriver.cpp" > CMakeFiles\UtPod.cpp.dir\UtPodDriver.cpp.i

CMakeFiles/UtPod.cpp.dir/UtPodDriver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UtPod.cpp.dir/UtPodDriver.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5\UtPodDriver.cpp" -o CMakeFiles\UtPod.cpp.dir\UtPodDriver.cpp.s

# Object files for target UtPod.cpp
UtPod_cpp_OBJECTS = \
"CMakeFiles/UtPod.cpp.dir/song.cpp.obj" \
"CMakeFiles/UtPod.cpp.dir/UtPodDriver.cpp.obj"

# External object files for target UtPod.cpp
UtPod_cpp_EXTERNAL_OBJECTS =

UtPod.cpp.exe: CMakeFiles/UtPod.cpp.dir/song.cpp.obj
UtPod.cpp.exe: CMakeFiles/UtPod.cpp.dir/UtPodDriver.cpp.obj
UtPod.cpp.exe: CMakeFiles/UtPod.cpp.dir/build.make
UtPod.cpp.exe: CMakeFiles/UtPod.cpp.dir/linklibs.rsp
UtPod.cpp.exe: CMakeFiles/UtPod.cpp.dir/objects1.rsp
UtPod.cpp.exe: CMakeFiles/UtPod.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable UtPod.cpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\UtPod.cpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UtPod.cpp.dir/build: UtPod.cpp.exe

.PHONY : CMakeFiles/UtPod.cpp.dir/build

CMakeFiles/UtPod.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\UtPod.cpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/UtPod.cpp.dir/clean

CMakeFiles/UtPod.cpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5" "C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5" "C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5\cmake-build-debug" "C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5\cmake-build-debug" "C:\Users\Shania Paul\Documents\Shania\EE312\Lab 5\cmake-build-debug\CMakeFiles\UtPod.cpp.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/UtPod.cpp.dir/depend

