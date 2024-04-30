# CPPDiveDeep
C++ Programs to understand the medium to advanced concepts


Tools:

1. IDE --> Visual Studio code
2. Extensions --> C/C++ IntelliSense, CMake Tools and C++ TestMate
3. Git Bash
4. CMake latest version
5. Clone the repo
6. Create build folder in the root: mkdir build
7. chage directory to build: cd build

Build Windows:

8. MSYS2 Software Distribution and Building Platform for Windows
9. compiler: MINGW64
10. configure and Generate CMakeFiles: cmake -G "MinGW Makefiles" ..
11. build: cmake --build . --target all
12. clean and build: cmake --build . --clean-first --target all
13. Specific target: cmake --build . --clean-first --target targetName

Build Linux:

14. Build system: Ninja
15. configure and Generate CMakeFiles: cmake -G Ninja ..
16. Build: Ninja
