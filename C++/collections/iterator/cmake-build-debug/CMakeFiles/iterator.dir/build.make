# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Chans\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6015.37\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Chans\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6015.37\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Chans\Documents\DesignModel\C++\collections\iterator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\iterator.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\iterator.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\iterator.dir\flags.make

CMakeFiles\iterator.dir\main.cpp.obj: CMakeFiles\iterator.dir\flags.make
CMakeFiles\iterator.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/iterator.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\iterator.dir\main.cpp.obj /FdCMakeFiles\iterator.dir\ /FS -c C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\main.cpp
<<

CMakeFiles\iterator.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/iterator.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\iterator.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\main.cpp
<<

CMakeFiles\iterator.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/iterator.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\iterator.dir\main.cpp.s /c C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\main.cpp
<<

CMakeFiles\iterator.dir\Menu.cpp.obj: CMakeFiles\iterator.dir\flags.make
CMakeFiles\iterator.dir\Menu.cpp.obj: ..\Menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/iterator.dir/Menu.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\iterator.dir\Menu.cpp.obj /FdCMakeFiles\iterator.dir\ /FS -c C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\Menu.cpp
<<

CMakeFiles\iterator.dir\Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/iterator.dir/Menu.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\iterator.dir\Menu.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\Menu.cpp
<<

CMakeFiles\iterator.dir\Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/iterator.dir/Menu.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\iterator.dir\Menu.cpp.s /c C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\Menu.cpp
<<

CMakeFiles\iterator.dir\Iterator.cpp.obj: CMakeFiles\iterator.dir\flags.make
CMakeFiles\iterator.dir\Iterator.cpp.obj: ..\Iterator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/iterator.dir/Iterator.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\iterator.dir\Iterator.cpp.obj /FdCMakeFiles\iterator.dir\ /FS -c C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\Iterator.cpp
<<

CMakeFiles\iterator.dir\Iterator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/iterator.dir/Iterator.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\iterator.dir\Iterator.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\Iterator.cpp
<<

CMakeFiles\iterator.dir\Iterator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/iterator.dir/Iterator.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\iterator.dir\Iterator.cpp.s /c C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\Iterator.cpp
<<

CMakeFiles\iterator.dir\DinerMenu.cpp.obj: CMakeFiles\iterator.dir\flags.make
CMakeFiles\iterator.dir\DinerMenu.cpp.obj: ..\DinerMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/iterator.dir/DinerMenu.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\iterator.dir\DinerMenu.cpp.obj /FdCMakeFiles\iterator.dir\ /FS -c C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\DinerMenu.cpp
<<

CMakeFiles\iterator.dir\DinerMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/iterator.dir/DinerMenu.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\iterator.dir\DinerMenu.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\DinerMenu.cpp
<<

CMakeFiles\iterator.dir\DinerMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/iterator.dir/DinerMenu.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\iterator.dir\DinerMenu.cpp.s /c C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\DinerMenu.cpp
<<

CMakeFiles\iterator.dir\DinerMenuIterator.cpp.obj: CMakeFiles\iterator.dir\flags.make
CMakeFiles\iterator.dir\DinerMenuIterator.cpp.obj: ..\DinerMenuIterator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/iterator.dir/DinerMenuIterator.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\iterator.dir\DinerMenuIterator.cpp.obj /FdCMakeFiles\iterator.dir\ /FS -c C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\DinerMenuIterator.cpp
<<

CMakeFiles\iterator.dir\DinerMenuIterator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/iterator.dir/DinerMenuIterator.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\iterator.dir\DinerMenuIterator.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\DinerMenuIterator.cpp
<<

CMakeFiles\iterator.dir\DinerMenuIterator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/iterator.dir/DinerMenuIterator.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\iterator.dir\DinerMenuIterator.cpp.s /c C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\DinerMenuIterator.cpp
<<

# Object files for target iterator
iterator_OBJECTS = \
"CMakeFiles\iterator.dir\main.cpp.obj" \
"CMakeFiles\iterator.dir\Menu.cpp.obj" \
"CMakeFiles\iterator.dir\Iterator.cpp.obj" \
"CMakeFiles\iterator.dir\DinerMenu.cpp.obj" \
"CMakeFiles\iterator.dir\DinerMenuIterator.cpp.obj"

# External object files for target iterator
iterator_EXTERNAL_OBJECTS =

iterator.exe: CMakeFiles\iterator.dir\main.cpp.obj
iterator.exe: CMakeFiles\iterator.dir\Menu.cpp.obj
iterator.exe: CMakeFiles\iterator.dir\Iterator.cpp.obj
iterator.exe: CMakeFiles\iterator.dir\DinerMenu.cpp.obj
iterator.exe: CMakeFiles\iterator.dir\DinerMenuIterator.cpp.obj
iterator.exe: CMakeFiles\iterator.dir\build.make
iterator.exe: CMakeFiles\iterator.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable iterator.exe"
	C:\Users\Chans\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6015.37\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\iterator.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\iterator.dir\objects1.rsp @<<
 /out:iterator.exe /implib:iterator.lib /pdb:C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\cmake-build-debug\iterator.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\iterator.dir\build: iterator.exe

.PHONY : CMakeFiles\iterator.dir\build

CMakeFiles\iterator.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\iterator.dir\cmake_clean.cmake
.PHONY : CMakeFiles\iterator.dir\clean

CMakeFiles\iterator.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Chans\Documents\DesignModel\C++\collections\iterator C:\Users\Chans\Documents\DesignModel\C++\collections\iterator C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\cmake-build-debug C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\cmake-build-debug C:\Users\Chans\Documents\DesignModel\C++\collections\iterator\cmake-build-debug\CMakeFiles\iterator.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\iterator.dir\depend
